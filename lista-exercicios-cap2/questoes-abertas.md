# Lista de Exercícios – Capítulo 2 (Operadores) – Questões Abertas

Respostas das questões teóricas e analíticas (Parte I). Cada questão também possui um
arquivo `exeNNN.c` correspondente que demonstra/verifica a resposta em código.

---

## Questão 01 – Truncamento de Tipos e Coerção Implícita

**a)** Será exibido o valor **2**.

**b)** A variável `valor_inteiro` é do tipo `int`, mas recebe o literal `2.97`, que é um
`double`. Como os tipos são diferentes, o compilador faz uma **conversão implícita
(coerção)** de `double` para `int`. Nessa conversão a parte fracionária é simplesmente
descartada — não há arredondamento. O fenômeno se chama **truncamento**.

**c)** O programador pode controlar isso de três formas:

1. **Manter a precisão** – declarar a variável como `float` ou `double`:
   `double valor = 2.97;`
2. **Deixar o truncamento explícito** com um *cast*, documentando que é intencional:
   `int valor = (int) 2.97;`
3. **Arredondar em vez de truncar** – usar `round()` de `<math.h>` ou somar 0.5 antes do cast:
   `int valor = (int) round(2.97);` ou `int valor = (int) (2.97 + 0.5);` → resulta em 3.

---

## Questão 02 – Entrada Standard de Caracteres vs. Bibliotecas Legadas

**a)** `<conio.h>` **não faz parte do padrão ANSI/ISO C**. É uma biblioteca proprietária de
compiladores antigos voltados a DOS/Windows (Turbo C, Borland C, alguns MinGW). Em Linux,
macOS e servidores o cabeçalho não existe, então o programa nem compila. Além disso, a
implementação varia entre compiladores, o que quebra a portabilidade mesmo entre versões
do Windows.

**b)** Em `<stdio.h>` os equivalentes portáveis são:

- `getchar()` – lê um caractere da entrada padrão (retorna `int`, para poder representar `EOF`);
- `putchar(c)` – escreve um caractere na saída padrão;
- também `scanf("%c", &c)` e `printf("%c", c)`.

A diferença é que essas funções são *buffered*: o caractere só chega ao programa depois que
o usuário pressiona **[ENTER]**.

**c)** Trecho que lê um caractere de forma robusta, descartando `'\n'` residuais no buffer:

```c
int c;
do {
    c = getchar();
} while (c == '\n');   /* repete enquanto só vier o ENTER de leituras anteriores */
```

Alternativa equivalente com `scanf`: o espaço antes de `%c` faz o `scanf` pular qualquer
espaço em branco (incluindo `'\n'`) antes de ler:

```c
char ch;
scanf(" %c", &ch);
```

---

## Questão 03 – Formatação de Saída em Bases Numéricas e ASCII

```c
int numero;
printf("Digite um número inteiro: ");
scanf("%d", &numero);

printf("Decimal: %d | Hexadecimal: %x | Octal: %o | Caractere ASCII: %c\n",
       numero, numero, numero, numero);
```

Exemplo com a entrada `65`: `Decimal: 65 | Hexadecimal: 41 | Octal: 101 | Caractere ASCII: A`

---

## Questão 04 – Operadores de Atribuição Composta e Precedência

Regras usadas:

- Todos os operadores de atribuição (`=`, `+=`, `-=`, `*=`, `/=`, `%=`) têm a **mesma
  precedência** (a mais baixa entre os binários) e são **associativos à direita**.
- `x op= expr` equivale a `x = x op (expr)` — o lado direito é sempre avaliado por inteiro antes.

Estado inicial: `a = 1, b = 2, c = 3, d = 4`

| Instrução | Avaliação passo a passo | Resultado |
|---|---|---|
| `a += b + c;` | `a = 1 + (2 + 3)` | **a = 6** |
| `b *= c = d + 2;` | direita primeiro: `c = 4 + 2 = 6`; depois `b = 2 * 6` | **b = 12, c = 6** |
| `d %= a + a + a;` | `d = 4 % (6 + 6 + 6) = 4 % 18` | **d = 4** |
| `d -= c -= b -= a;` | `b = 12 - 6 = 6` → `c = 6 - 6 = 0` → `d = 4 - 0` | **d = 4, c = 0, b = 6** |
| `a += b += c += 7;` | `c = 0 + 7 = 7` → `b = 6 + 7 = 13` → `a = 6 + 13` | **a = 19, b = 13, c = 7** |

**Valores finais: `a = 19`, `b = 13`, `c = 7`, `d = 4`.**

---

## Questão 05 – Avaliação de Expressões Lógicas e Relacionais

Dados: `int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y = 4.4;`

Precedência (maior → menor): `!` (unário) > `* /` > `+ -` > `< <= > >=` > `== !=` > `&&` > `||`

| | Expressão | Avaliação | Resultado |
|---|---|---|---|
| a) | `i < j + 3` | `1 < 5` | **1** |
| b) | `2 * i - 7 <= j - 8` | `-5 <= -6` | **0** |
| c) | `-x + y >= 2.0 * y` | `1.1 >= 8.8` | **0** |
| d) | `x == y` | `3.3 == 4.4` | **0** |
| e) | `!(n - j)` | `!(0)` | **1** |
| f) | `!n - j` | `(!2) - 2 = 0 - 2` | **-2** (≠ 0, logo é *verdadeiro*) |
| g) | `i && j && k` | `1 && 1 && 1` | **1** |
| h) | `i \|\| j - 3 && k` | `i \|\| ((j - 3) && k)` = `1 \|\| (-1 && 3)` | **1** (curto-circuito no `\|\|`) |
| i) | `i < j && 2 >= k` | `(1 < 2) && (2 >= 3)` = `1 && 0` | **0** |
| j) | `i == 2 \|\| j == 4 \|\| k == 5` | `0 \|\| 0 \|\| 0` | **0** |

Observação sobre **(f)**: o `!` tem precedência maior que o `-`, então aplica-se apenas a
`n`. O resultado é aritmético (`-2`) e não um valor lógico 0/1; como em C qualquer valor
diferente de zero é considerado verdadeiro, se usado numa condição essa expressão seria
tratada como *verdadeira*.

---

## Questão 06 – Comportamento e Precedência dos Incrementos

**a)**

- `++n` (**prefixado**): primeiro incrementa `n`, depois o valor já incrementado é usado na
  expressão. Trecho A imprime: **`n = 6, x = 6`**.
- `m++` (**pós-fixado**): primeiro o valor atual de `m` é usado na expressão, depois `m` é
  incrementado. Trecho B imprime: **`m = 6, y = 5`**.

Em ambos os casos a variável termina valendo 6; a diferença está no valor que "sai" da
expressão para a atribuição.

**b)** `printf("%d\t%d\t%d\n", n, n+1, n++);`

Essa instrução tem **comportamento indefinido** por dois motivos:

1. O padrão C **não define a ordem de avaliação dos argumentos** de uma chamada de função.
   O compilador pode avaliar `n++` antes, depois ou entre os outros argumentos.
2. A variável `n` é **modificada** (`n++`) e **lida** (`n`, `n+1`) dentro da mesma expressão
   sem um ponto de sequência entre esses acessos, o que o padrão proíbe.

Na prática, com `n = 5`, um compilador pode imprimir `5 6 5`, outro `6 7 5`, e nenhum está
"errado" — o padrão simplesmente não garante nada. A solução é nunca modificar uma variável
mais de uma vez (nem modificar e ler) na mesma expressão: fazer o incremento em uma instrução
separada.

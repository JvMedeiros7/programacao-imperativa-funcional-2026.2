# Lista de Exercícios – Capítulo 3 (Laço de Repetição) – Questões Abertas

Respostas das questões teóricas e analíticas (Parte I). Cada questão também possui um
arquivo `exeNNN.c` correspondente que demonstra/verifica a resposta em código.

---

## Questão 01 – Diferenças entre for, while e do-while

**a)** A diferença está no momento em que a condição é testada:

- **while**: testa a condição **antes** de executar o bloco. Se a condição já for falsa
  no início, o bloco não executa nenhuma vez (mínimo de **0** execuções).
- **do-while**: executa o bloco **primeiro** e testa a condição **depois**. Mesmo com a
  condição falsa desde o início, o bloco executa pelo menos **uma** vez (mínimo de **1**).

**b)**

- **for**: quando o número de repetições é conhecido ou o laço é um contador. Inicialização,
  teste e incremento ficam juntos no cabeçalho (ex: contar de 0 a 100).
- **while**: quando o número de repetições não é conhecido antecipadamente e depende de uma
  condição (ex: ler valores até um sentinela, ou até uma condição de término ser atingida).
- **do-while**: quando o bloco precisa executar pelo menos uma vez antes da verificação
  (ex: exibir um menu, ou validar uma entrada e pedir de novo se estiver errada).

**c)** É um **erro de lógica**, não de compilação. O `;` logo após o `while (condicao)` é uma
instrução vazia (*null statement*), que é válida em C, então o código compila. O corpo do
laço passa a ser esse `;`, que não faz nada. Se `condicao` for verdadeira, o programa executa
o corpo vazio, volta a testar `condicao` e repete. Se nada dentro do laço alterar `condicao`,
o programa entra em **laço infinito** (ocupando a CPU sem produzir efeito). A exceção é quando
a própria condição tem efeito colateral, como em `while (getchar() != 'X');`, em que cada teste
lê um caractere e o laço termina ao encontrar `X`.

Demonstração: [exe001.c](exe001.c).

---

## Questão 02 – Escopo e Tempo de Vida de Variáveis de Bloco

**a)** A variável `soma` foi declarada dentro do bloco `{ }` do `for`. Ela só existe enquanto
o programa estiver dentro desse bloco. No `printf` final, fora do laço, o identificador `soma`
não está declarado, então o compilador emite erro (`'soma' undeclared`).

**b)** Mesmo movendo o `printf` para dentro do bloco, o valor estaria conceitualmente errado.
A cada iteração a variável é criada de novo e inicializada com `0`. Ao final do bloco ela é
destruída. Por isso a soma nunca acumula: em cada volta o `printf` mostraria apenas `i * i`
e não a soma até aquele ponto.

**c)** Código corrigido (declarar `soma` antes do laço):

```c
int i;
int soma = 0;

for (i = 1; i < 10; i++) {
    soma += i * i;
}

printf("Soma final = %d\n", soma);
```

Conceitos:

- **Visibilidade (escopo)**: é a região do código onde um identificador pode ser usado. Uma
  variável declarada dentro de `{ }` é visível apenas entre a declaração e a chave de fechamento
  desse bloco.
- **Escopo de bloco**: variáveis declaradas dentro de um bloco são locais a ele. Variáveis
  declaradas antes do laço, no bloco da função, são visíveis também dentro do `for` e depois dele.
- **Tempo de vida**: é o período em que a memória da variável existe. Variáveis locais
  automáticas são criadas ao entrar no bloco e destruídas ao sair. Por isso uma variável dentro
  do laço não guarda valor entre iterações.

Correção em código: [exe002.c](exe002.c).

---

## Questão 03 – Flexibilidade do Laço for e Omissão de Expressões

**a)** Trecho A: `a` começa em 36 e é dividido por 2 a cada volta, enquanto `a > 0`. A sequência
impressa é **36 18 9 4 2 1** (separados por tabulação). Quando `a` vira `0`, o teste falha.

**b)** O trecho lê caracteres até encontrar `'X'`. A expressão `ch + 1` soma 1 ao código do
caractere lido, então o programa imprime o caractere seguinte na tabela (`'a'` vira `'b'`, `'b'`
vira `'c'`, e assim por diante).

Os parênteses em `(ch = getch())` são necessários porque o operador `!=` tem **precedência maior**
que o `=`. Sem parênteses, `ch = getch() != 'X'` seria interpretado como `ch = (getch() != 'X')`:
`ch` receberia `1` ou `0` em vez do caractere lido, e a impressão de `ch + 1` ficaria errada.
Observação: `getch()` pertence a `<conio.h>`, que não é padrão C. Na demonstração usa-se `getchar()`.

**c)** Com `break`. Dentro do laço infinito, um teste sobre uma condição de parada seguido de
`break` encerra o laço e devolve o controle ao programa, sem que o sistema operacional precise
finalizar o processo. Também seria possível usar `return` (se o laço estiver em uma função) ou
`exit()`.

Demonstração: [exe003.c](exe003.c).

---

## Questão 04 – Comandos de Desvio de Fluxo: break vs. continue

**a)** Quando `break` é executado dentro de um `for` ou `while`, o laço é interrompido
**imediatamente**. O restante do corpo e as expressões de incremento e teste são ignoradas, e a
execução continua na primeira instrução depois do laço.

**b)** Quando `continue` é executado dentro de um `for`, o restante do corpo da iteração atual é
pulado e o laço segue para a próxima iteração. A expressão executada imediatamente após o
`continue` é a **terceira expressão do cabeçalho**, o **incremento**. Depois dela, a condição de
teste é avaliada novamente.

**c)** Apenas o **laço interno**. O `break` encerra somente o laço mais próximo que o contém. O
laço externo continua normalmente com a próxima iteração.

Demonstração: [exe004.c](exe004.c).

---

## Questão 05 – Operador Vírgula e Múltiplas Variáveis de Controle

**a)** O laço executa **5 iterações**. Os valores de `(i, j)` são `(0,10)`, `(1,9)`, `(2,8)`,
`(3,7)` e `(4,6)`. Na próxima verificação `(5,5)` a condição `i < j` é falsa e o laço termina.

**b)** Saída produzida:

```
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

**c)** Versão equivalente com `while`:

```c
i = 0;
j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

Demonstração: [exe005.c](exe005.c).

---

## Questão 06 – Laço Sem Corpo e Incremento Pós-fixado

**a)** O valor final impresso é **`x = 6`**.

**b)** No teste `x++ < 5`, o operador pós-fixado compara o valor **antigo** de `x` e só depois
incrementa a variável. A sequência é:

| Teste (valor antigo) | Comparação | Resultado | `x` após o teste |
|---|---|---|---|
| 0 | `0 < 5` | verdadeiro | 1 |
| 1 | `1 < 5` | verdadeiro | 2 |
| 2 | `2 < 5` | verdadeiro | 3 |
| 3 | `3 < 5` | verdadeiro | 4 |
| 4 | `4 < 5` | verdadeiro | 5 |
| 5 | `5 < 5` | **falso** | 6 |

Nas cinco primeiras verificações o teste é verdadeiro e o laço continua. Na sexta, o teste é
falso e o laço termina, mas `x` já foi incrementado para 6.

**c)** Versão explícita, sem corpo vazio, com o mesmo resultado final:

```c
int x = 0;
while (x <= 5) {
    x++;
}
printf("Valor final de x = %d\n", x);
```

A condição `x <= 5` reproduz exatamente os seis testes da versão original, o que explica o
valor final 6.

Demonstração: [exe006.c](exe006.c).

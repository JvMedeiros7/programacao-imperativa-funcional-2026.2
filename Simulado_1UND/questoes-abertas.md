# Simulado – Capítulos 1, 2 e 3 – Questões Abertas (Parte I)

Respostas das questões teóricas e analíticas (Parte I). Cada questão também possui um
arquivo `exercicioN.c` correspondente que demonstra/verifica a resposta em código.

---

## Questão 01 – Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C

**Alternativa correta: (c)**

Todos os pares de nomes (`valor`/`VALOR`, `peso`/`Peso`, `taxa`/`TAXA`) representam
identificadores totalmente distintos para o compilador C, pois a linguagem diferencia
rigorosamente maiúsculas de minúsculas.

- **(a)** está errada: `numero` e `Numero` são variáveis independentes, com endereços de
  memória diferentes.
- **(b)** está errada: o ponto de entrada reconhecido pelo compilador/linker é sempre
  `main` (minúsculo); `Main` não é reconhecida como tal.
- **(d)** está errada: a sensibilidade a caixa é uma regra da própria linguagem C,
  independente do sistema operacional usado na compilação.

---

## Questão 02 – Especificadores de Formato, Sequências de Escape e Erros de Compilação

Os três erros sintáticos/estruturais do código:

1. **`#include <stdlib.h>;`** — ponto-e-vírgula sobrando após uma diretiva de
   pré-processador. Diretivas `#include` não terminam com `;`; esse `;` sobra como uma
   instrução solta fora de qualquer função, o que é inválido em C.
2. **`int Main()`** — C diferencia maiúsculas de minúsculas; o ponto de entrada do
   programa deve ser `main`, nunca `Main`.
3. **`cout << endl;`** — `cout`/`endl` pertencem à biblioteca `<iostream>` do C++
   (namespace `std`). Em C puro essa sintaxe não existe; o equivalente é usar `'\n'`
   dentro do próprio `printf` ou chamar `printf("\n");`.

A versão corrigida está em [exercicio2.c](exercicio2.c).

---

## Questão 03 – Operadores de Atribuição Composta e Avaliação Sequencial

Estado inicial: `a = 2, b = 4, c = 5, d = 10`

| Instrução | Avaliação passo a passo | Resultado |
|---|---|---|
| `a += b + c;` | `a = 2 + (4 + 5)` | **a = 11** |
| `b *= c = d - 2;` | direita primeiro: `c = 10 - 2 = 8`; depois `b = 4 * 8` | **b = 32, c = 8** |
| `d %= a + 3;` | `d = 10 % (11 + 3) = 10 % 14` | **d = 10** |
| `a += b += c += 5;` | `c = 8 + 5 = 13` → `b = 32 + 13 = 45` → `a = 11 + 45` | **a = 56, b = 45, c = 13** |

**Valores finais: `a = 56`, `b = 45`, `c = 13`, `d = 10`.**

---

## Questão 04 – Avaliação de Expressões Lógicas, Relacionais e Precedência

Dados: `i = 2, j = 3, k = 0, x = 2.5, y = 5.0`

| | Expressão | Avaliação | Resultado |
|---|---|---|---|
| a) | `i < j + 2` | `2 < 5` | **1** |
| b) | `2 * i - 5 <= j - 4` | `-1 <= -1` | **1** |
| c) | `!k && (x + y >= 7.5)` | `1 && (7.5 >= 7.5)` | **1** |
| d) | `!(i == j) \|\| (y / x == 2.0)` | `1 \|\| 1` (curto-circuito no `\|\|`) | **1** |
| e) | `i == 2 && j == 4 \|\| k == 0` | `(1 && 0) \|\| 1` | **1** |

---

## Questão 05 – Estruturas de Repetição: Comparação entre for, while e do-while

**a)** No `while`, o teste da condição ocorre **antes** de cada execução do bloco, então o
bloco pode executar **zero vezes** se a condição já começar falsa. No `do-while`, o teste
ocorre **depois** do bloco, então o bloco **sempre executa pelo menos uma vez**, mesmo que
a condição seja falsa desde o início.

**b)** O `for` é mais elegante quando o número de repetições é conhecido de antemão (ou há
um contador claro), pois reúne em um só lugar a inicialização, a condição de parada e o
incremento/decremento, tornando o cabeçalho autoexplicativo. O `while` é preferido quando a
condição de parada depende de um evento imprevisível, como ler até o usuário digitar um
valor especial.

**c)** `while (condicao);` **não é erro de compilação**. O `;` logo após o cabeçalho é
interpretado como um comando vazio, sintaticamente válido. É um **erro de lógica**: se
`condicao` for verdadeira e nada dentro desse "laço vazio" puder alterá-la, o programa entra
em **laço infinito** — o compilador repete indefinidamente a instrução vazia, e o bloco
`{ ... }` escrito logo em seguida passa a ser executado apenas uma vez, depois que o laço
(hipoteticamente) terminar, deixando de fazer parte dele.

---

## Questão 06 – Escopo de Bloco e Comandos de Desvio (break e continue)

**a)** A variável `soma` é declarada dentro das chaves `{ }` do corpo do `for`, portanto seu
escopo termina na chave de fechamento desse bloco. No `printf` final, fora do laço, o
identificador `soma` não existe mais, o que gera um erro de compilação (`'soma' undeclared`).

**b)** Iterações efetivamente executadas: `i = 1, 2, 3, 4, 6, 7`.

- Em `i = 5`, o `continue` pula o restante do corpo e vai direto para `i++`.
- Em `i = 8`, o `break` interrompe o laço imediatamente, antes de executar o corpo para
  `i = 8`; o laço termina nesse ponto (`i = 9, 10` nunca acontecem).
- Além disso, como `int soma = 0;` está dentro do bloco repetido, `soma` é recriada e
  reiniciada em 0 a cada iteração, então o valor nunca se acumula de fato entre elas.

**c)** A correção consiste em declarar `soma` **antes** do `for` (fora do bloco), para que
ela exista durante toda a função e acumule entre as iterações. Com a correção, o resultado
impresso é:

```
Soma final = 115
```

(soma de `1² + 2² + 3² + 4² + 6² + 7²` = `1 + 4 + 9 + 16 + 36 + 49` = `115`, já que `i = 5` é
pulado pelo `continue` e `i = 8` nunca executa o corpo por causa do `break`).

A versão corrigida está em [exercicio6.c](exercicio6.c).

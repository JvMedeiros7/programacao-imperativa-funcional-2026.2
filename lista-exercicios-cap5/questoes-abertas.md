# Lista de Exercícios – Capítulo 5 (Funções) – Questões Abertas

Respostas das questões teóricas e analíticas (Parte I). Cada questão também possui um
arquivo `exeNNN.c` correspondente que demonstra/verifica a resposta em código.

---

## Questão 01 – Anatomia de uma Função e o Papel do Protótipo

**a)**
- **Protótipo:** `float celsius(float);` (antes da `main`).
- **Chamada:** `c = celsius(f);` (dentro da `main`).
- **Definição:** `float celsius(float fahr) { ... }` (depois da `main`).

O protótipo informa ao compilador o nome, o tipo de retorno e os tipos dos parâmetros antes do
uso. A chamada transfere o controle para a função, passando os argumentos, e recebe o valor
retornado. A definição contém o corpo, isto é, o código que de fato é executado.

**b)** O protótipo permite ao compilador **verificar a quantidade e o tipo dos argumentos** em
cada chamada. Se fosse omitido e a função fosse definida depois da `main`, o compilador não
conheceria a função no ponto da chamada: em C antigo assumiria retorno `int` e **não conferiria
os parâmetros**; em compiladores modernos isso gera erro ou aviso.

**c)** O tipo de `celsius()` é **`float`**, pois é o tipo do valor que ela devolve. O tipo é
dado pelo retorno porque é ele que define o tipo da expressão `celsius(f)` onde a chamada é
usada; os parâmetros apenas alimentam o cálculo.

Demonstração: [exe001.c](exe001.c).

---

## Questão 02 – O Comando return e suas Limitações

**a)** Uma função em C devolve **um único valor** por `return`. Em `return soma, media;` o
operador vírgula avalia `soma`, descarta e devolve só `media`. O programador pretendia devolver
os dois valores, mas isso não é possível com `return`.

**b)** `return;` **encerra imediatamente** a função `void`, sem devolver valor. **Não é
obrigatório** no final: a função termina sozinha ao chegar na chave de fechamento.

**c)**
```c
int calculaMedia(int a, int b, int c) {
    return (a + b + c) / 3;
}

int calculaSoma(int a, int b, int c) {
    return a + b + c;
}
```
São necessárias duas funções porque cada `return` devolve apenas um valor.

Demonstração: [exe002.c](exe002.c).

---

## Questão 03 – Funções void, Parâmetros e Assinaturas

**a)**
- `void exibe_mensagem(char* msg);` – **tem parâmetro** (`char*`), **sem retorno**.
- `int obter_codigo(void);` – **sem parâmetros**, **retorna `int`**.
- `void limpar_tela(void);` – **sem parâmetros** e **sem retorno**.

**b)** A função com retorno **calcula e devolve um valor** a quem chamou (ex.: calcular uma
média). O procedimento (`void`) **apenas executa uma ação**, sem devolver nada (ex.: imprimir
um menu).

**c)** `x = limpar_tela();` **não é válida**: a função é `void` e não há valor para atribuir a
`x` (erro de compilação).

Demonstração: [exe003.c](exe003.c).

---

## Questão 04 – Recursão: Caso Base, Passo Recursivo e Pilha de Execução

**a)** Caso base: `n == 0` retorna `1`. Passo recursivo: `n * fatorial(n - 1)`. Sem o caso base,
a função chamaria a si mesma indefinidamente até **estourar a pilha** (*stack overflow*).

**b)** Rastreamento de `fatorial(4)`:

Empilhamento:
```
fatorial(4) -> 4 * fatorial(3)
fatorial(3) -> 3 * fatorial(2)
fatorial(2) -> 2 * fatorial(1)
fatorial(1) -> 1 * fatorial(0)
fatorial(0) -> 1   (caso base)
```
Desempilhamento:
```
fatorial(1) = 1 * 1 = 1
fatorial(2) = 2 * 1 = 2
fatorial(3) = 3 * 2 = 6
fatorial(4) = 4 * 6 = 24
```

**c)** Cada chamada cria um **novo registro de ativação** na pilha (parâmetros, variáveis
locais e endereço de retorno). Sem caso base as chamadas nunca terminam, a pilha enche e o
programa falha.

Demonstração: [exe004.c](exe004.c).

---

## Questão 05 – Diretiva #define, Constantes e Macros com Argumentos

**a)** `SQR(2+3)` imprime **25**, pois vira `((2+3)*(2+3))`. `DOBRO(2+3)` imprime **8**, pois
vira `2+3*2`: a macro é substituição de texto e, sem parênteses de proteção, a multiplicação
tem precedência sobre a soma.

**b)** `#define` não termina com `;` porque é uma **diretiva do pré-processador**, não um
comando C (o `;` faria parte do texto substituído). Usam-se **maiúsculas** por convenção, para
distinguir constantes e macros de variáveis e funções.

**c)** `#define PRN (n) printf("%d", n)` está errado porque o **espaço** depois de `PRN` faz o
pré-processador tratar `(n) printf("%d", n)` como o texto da constante `PRN`. A forma correta é
`#define PRN(n) printf("%d", n)`. Diferença: a macro é **substituição de texto antes da
compilação** (sem tipos, sem chamada, pode avaliar o argumento mais de uma vez); a função é
chamada em **tempo de execução**, com verificação de tipos.

Demonstração: [exe005.c](exe005.c).

---

## Questão 06 – Diretivas #include, #undef e Compilação Condicional

**a)** `#include <stdio.h>` procura nos **diretórios padrão** do compilador (bibliotecas do
sistema). `#include "areas.h"` procura primeiro na **pasta do projeto** (arquivos próprios).

**b)** `#undef SOMA` **remove a definição** da macro, que deixa de existir dali em diante.
`#undef SOMA(x,y)` está incorreto porque `#undef` recebe **apenas o nome**.

**c)** Se `DEBUG` não foi definido, imprime **"Modo normal"**. A decisão é tomada no
**pré-processamento** (antes da compilação), portanto o trecho não escolhido nem chega ao
executável. As diretivas são consumidas pelo pré-processador, por isso não aparecem no
executável final.

Demonstração: [exe006.c](exe006.c).

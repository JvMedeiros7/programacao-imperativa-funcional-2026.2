# Lista de Exercícios – Capítulo 4 (Comandos de Decisão) – Questões Abertas

Respostas das questões teóricas e analíticas (Parte I). Cada questão também possui um
arquivo `exeNNN.c` correspondente que demonstra/verifica a resposta em código.

---

## Questão 01 – Atribuição vs. Igualdade no if

**a)** `if (x = 0)` não compara: **atribui** 0 a `x`. O valor da expressão de atribuição é o
valor atribuído, ou seja, 0, que é falso. Então o bloco do `if` **nunca executa** (cai no
`else`, se existir) e, além disso, `x` fica valendo 0 depois do teste, mesmo que antes tivesse
outro valor.

**b)** Em C a condição do `if` pode ser qualquer expressão numérica (inteira ou real). O valor
**0** (ou 0.0) é **falso** e qualquer valor **diferente de 0** é **verdadeiro**.

**c)** `if (x = -5)` atribui -5 a `x`, e -5 é diferente de 0, portanto a condição é
**verdadeira** e o bloco **é executado**. Pelo padrão ANSI C, o resultado de uma atribuição é o
valor da variável depois de atribuída, e qualquer valor diferente de zero é verdadeiro.

Demonstração: [exe001.c](exe001.c).

---

## Questão 02 – Associação do else e Aninhamento

**a)** Será impressa a mensagem **"Opção B"**. Apesar da identação sugerir que o `else` é do
primeiro `if`, ele pertence ao `if (y > 10)`. Como `x > 10` é verdadeiro, o programa entra no
`if` interno, `y > 10` é falso (y = 5), então o `else` é executado.

**b)** O `else` sempre se associa ao **`if` mais próximo** (acima dele) que ainda não tenha
um `else`, dentro do mesmo bloco.

**c)** Com chaves:

```c
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

Assim a "Opção B" só é impressa quando `x <= 10`.

Demonstração: [exe002.c](exe002.c).

---

## Questão 03 – Operador Ternário vs. if-else

**a)** Em `situacao = (media >= 7.0) ? 'A' : 'R';` primeiro a condição `media >= 7.0` é
testada. Se for verdadeira, o resultado da expressão é `'A'`; se for falsa, é `'R'`. Esse
resultado é guardado em `situacao`. Com `media = 6.8` a condição é falsa, então `situacao`
recebe **'R'**.

**b)**

```c
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** Não. O ternário é uma **expressão** que devolve um valor, e cada lado aceita apenas
uma expressão. Ele não serve quando cada caminho precisa executar **vários comandos** (por
exemplo, vários `printf`, atribuições diferentes ou laços). Nesses casos é necessário o
`if-else` com blocos `{ }`.

Demonstração: [exe003.c](exe003.c).

---

## Questão 04 – switch-case e Fall-Through

**a)** Saída:

```
Prata
Ouro
```

Com `codigo = 2` o programa entra no `case 2` e imprime "Prata". Como não há `break`, a
execução **continua** no `case 3`, que imprime "Ouro" e só então encontra o `break`.

**b)** O `break` **encerra** o `switch`, impedindo que os cases seguintes sejam executados.
Quando ele é omitido ocorre o **fall-through** (efeito cascata ou "queda").

**c)** O `switch` aceita expressões de tipo **inteiro**: `int`, `short`, `long`, `char` e
`enum`. **Não** é permitido usar `float` ou `double`, porque números reais têm representação
imprecisa e os rótulos `case` precisam ser constantes inteiras exatas.

Demonstração: [exe004.c](exe004.c).

---

## Questão 05 – Curto-Circuito

**a)** Saída: `a = 0, b = 5, c = 8`. Como `a != 0` é falso, o `&&` já sabe que o resultado
será falso e **não avalia** `++b`, então `b` continua 5. A condição é falsa, entra no `else` e
`c = 10 - 2 = 8`.

**b)**

- **&&** (E): se o lado esquerdo for **falso**, o direito **não é avaliado**, pois o resultado
  já é falso.
- **||** (OU): se o lado esquerdo for **verdadeiro**, o direito **não é avaliado**, pois o
  resultado já é verdadeiro.

**c)** Com `if (a == 0 || ++b > 5)`: `a == 0` é verdadeiro, então o `++b` **não** é executado.
Entra no `if` e `c += 10`. Valores finais: **b = 5** e **c = 20**.

Demonstração: [exe005.c](exe005.c).

---

## Questão 06 – else-if e Intervalos

**a)** Com `idade = 65` são impressas três mensagens: **Idoso**, **Adulto** e **Jovem**. Isso
acontece porque os três `if` são independentes e todos são testados, e 65 satisfaz as três
condições (>= 60, >= 18 e >= 12). O `else` pertence apenas ao último `if`.

**b)** Em uma sequência de `if` independentes **todas** as condições são testadas. Em uma
cadeia `else-if`, quando uma condição é verdadeira, o bloco executa e **as demais são
ignoradas**.

**c)**

```c
if (idade >= 60)
    printf("Idoso\n");
else if (idade >= 18)
    printf("Adulto\n");
else if (idade >= 12)
    printf("Jovem\n");
else
    printf("Criança\n");
```

Demonstração: [exe006.c](exe006.c).

---

## Parte II – Questões práticas (07 a 28)

Cada questão prática está em seu próprio arquivo: [exe007.c](exe007.c) até
[exe028.c](exe028.c).

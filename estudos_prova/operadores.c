#include <stdio.h>

int main() {


    /* Operadores */

    printf("Operadores em C:\n");

    int x, y;
    y = x = 3;   /* avalia da direita para a esquerda: y = (x = 3) */
    printf("x: %d, y: %d\n", x, y); /* x vale 3, y vale 3 */

    /*Aritméticos*/

    printf("Aritméticos:\n");
    int a = 10, b = 3;

    printf("Valor de a = %d\n", a);
    printf("Valor de b = %d\n", b);

    printf("a + b = %d\n", a + b); /* adição */
    printf("a - b = %d\n", a - b); /* subtração */      
    printf("a * b = %d\n", a * b); /* multiplicação */
    printf("a / b = %d\n", a / b); /* divisão */
    printf("a %% b = %d\n", a % b); /* resto da divisão */

    /*Incremento e Decremento
    
    -- Incremento: a++ ou ++a
    -- Decremento: a-- ou --a

    Existem nas formas pré-fixada = ++a ou --a = incrementa ou decrementa o valor de a antes de ser usado na expressão.
    Existem nas formas pós-fixada = a++ ou a-- = incrementa ou decrementa o valor de a depois de ser usado na expressão.

    */

    printf("Incremento e Decremento:\n");

    int c = 5;
    printf("Valor de c = %d\n", c);
    printf("c++ = %d\n", c++); /* pós-fixado: incrementa depois de usar o valor de c */
    printf("Valor de c depois de c++ = %d\n", c); /* valor de c após incremento */
    printf("++c = %d\n", ++c); /* pré-fixado: incrementa antes de usar o valor de c */
    printf("c-- = %d\n", c--); /* pós-fixado: decrementa depois de usar o valor de c */
    printf("Valor de c depois de c-- = %d\n", c); /* valor de c após decremento */
    printf("--c = %d\n", --c); /* pré-fixado: decrementa antes de usar o valor de c */

    printf("Valor final de c = %d\n", c); /* valor final de c */

    /* Os precedentes unários tem preferência sobre os operadores binários então:
    
    Os operadores unários de incremento e decremento têm precedência sobre os operadores binários de adição e subtração. Portanto, em uma expressão como ++a + b, o valor de a será incrementado antes da adição com b.
    
    */
    
    printf("Precedência de operadores:\n");

    int e = 2, d;
    d = e++ * 2;   // b vale 4  (usa o 2, depois a vira 3)
    printf("Valor de e depois de e++ = %d\n", e);
    printf("Valor de d = %d\n", d);

    e = 2;
    d = ++e * 2;   // b vale 6  (a vira 3, depois multiplica
    printf("Valor de e depois de ++e = %d\n", e);
    printf("Valor de d = %d\n", d);


    /* Operadores relacionais */

    printf("Operadores relacionais:\n");

    int f = 5, g = 10;
    printf("Valor de f = %d\n", f);
    printf("Valor de g = %d\n", g);

    printf("f == g: %d\n", f == g); /* igual a */
    printf("f != g: %d\n", f != g); /* diferente de */
    printf("f > g: %d\n", f > g);   /* maior que */
    printf("f < g: %d\n", f < g);   /* menor que */
    printf("f >= g: %d\n", f >= g); /* maior ou igual a */
    printf("f <= g: %d\n", f <= g); /* menor ou igual a */

    int verificação = (f < g) + (f != g); /* f > g é v (1) e f != g é verdadeiro (1), então a soma é 1 */
    printf("Resultado da verificacao (f < g) + (f != g): %d\n", verificação);

    /* Operadores lógicos */

    printf("Operadores lógicos:\n");

    int h = 1, i = 0;
    printf("Valor de h = %d\n", h);
    printf("Valor de i = %d\n", i);

    printf("h && i: %d\n", h && i); /* AND lógico */
    printf("h || i: %d\n", h || i); /* OR lógico */
    printf("!h: %d\n", !h);         /* NOT lógico */
    

    return 0;
}
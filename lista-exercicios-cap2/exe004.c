/*
 * Questao 04: Operadores de Atribuicao Composta e Precedencia.
 *
 * Todos os operadores de atribuicao (=, +=, -=, *=, /=, %=) tem a MESMA
 * precedencia (a mais baixa entre os operadores binarios) e sao avaliados
 * da DIREITA para a ESQUERDA. Alem disso, "x op= expr" equivale a
 * "x = x op (expr)" -> o lado direito e SEMPRE avaliado por inteiro antes.
 *
 * Passo a passo (a=1, b=2, c=3, d=4):
 *
 *  a += b + c;          a = 1 + (2 + 3)              -> a = 6
 *  b *= c = d + 2;      c = 4 + 2 = 6 (primeiro, pela direita)
 *                       b = 2 * 6                    -> b = 12, c = 6
 *  d %= a + a + a;      d = 4 % (6 + 6 + 6) = 4 % 18 -> d = 4
 *  d -= c -= b -= a;    b = 12 - 6 = 6
 *                       c = 6 - 6 = 0
 *                       d = 4 - 0                    -> d = 4, c = 0, b = 6
 *  a += b += c += 7;    c = 0 + 7 = 7
 *                       b = 6 + 7 = 13
 *                       a = 6 + 13                   -> a = 19, b = 13, c = 7
 *
 * Valores finais: a = 19, b = 13, c = 7, d = 4.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a = 1, b = 2, c = 3, d = 4;
    printf("Inicial:            a=%2d b=%2d c=%2d d=%2d\n", a, b, c, d);

    a += b + c;            /* a = a + (b + c) */
    printf("a += b + c;         a=%2d b=%2d c=%2d d=%2d\n", a, b, c, d);

    b *= c = d + 2;        /* c recebe d+2 primeiro; depois b = b * c */
    printf("b *= c = d + 2;     a=%2d b=%2d c=%2d d=%2d\n", a, b, c, d);

    d %= a + a + a;        /* d = d % (a + a + a) */
    printf("d %%= a + a + a;     a=%2d b=%2d c=%2d d=%2d\n", a, b, c, d);

    d -= c -= b -= a;      /* da direita p/ esquerda: b -= a; c -= b; d -= c */
    printf("d -= c -= b -= a;   a=%2d b=%2d c=%2d d=%2d\n", a, b, c, d);

    a += b += c += 7;      /* c += 7; b += c; a += b */
    printf("a += b += c += 7;   a=%2d b=%2d c=%2d d=%2d\n", a, b, c, d);

    return 0;
}

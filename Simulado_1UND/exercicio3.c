/*
 * Questao 03: Operadores de Atribuicao Composta e Avaliacao Sequencial.
 *
 * int a = 2, b = 4, c = 5, d = 10;
 *
 * a += b + c;             -> a = 2 + (4 + 5)              = 11
 * b *= c = d - 2;          -> direita p/ esquerda: c = 10-2 = 8; b = 4*8 = 32
 * d %= a + 3;               -> d = 10 % (11 + 3) = 10 % 14 = 10
 * a += b += c += 5;         -> c = 8+5=13 ; b = 32+13=45 ; a = 11+45=56
 *
 * Valores finais: a = 56, b = 45, c = 13, d = 10
 */

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a = 2, b = 4, c = 5, d = 10;

    a += b + c;
    printf("Apos a += b + c;          a = %d\n", a);

    b *= c = d - 2;
    printf("Apos b *= c = d - 2;      b = %d, c = %d\n", b, c);

    d %= a + 3;
    printf("Apos d %%= a + 3;          d = %d\n", d);

    a += b += c += 5;
    printf("Apos a += b += c += 5;    a = %d, b = %d, c = %d\n", a, b, c);

    printf("\nValores finais: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    system("PAUSE");
    return 0;
}

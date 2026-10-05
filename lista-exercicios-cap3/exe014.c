/*
 * Questao 14: Sequencia de quadrados e acumulador global.
 *
 * Imprime i -> i*i para i de 1 a 100 e, ao final, a soma de todos os quadrados.
 * A soma (338350) cabe em int.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }

    printf("\nSoma total dos quadrados: %d\n", soma);

    return 0;
}

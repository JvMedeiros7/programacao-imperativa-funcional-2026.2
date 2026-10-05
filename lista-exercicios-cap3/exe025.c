/*
 * Questao 25: Analise e teste de primalidade de um numero inteiro.
 *
 * Um numero e primo se for maior que 1 e tiver exatamente 2 divisores (1 e ele
 * mesmo). O laco conta todos os divisores de 1 ate N.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            divisores++;
    }

    printf("Quantidade de divisores de %d: %d\n", n, divisores);

    if (divisores == 2)
        printf("%d e um numero PRIMO.\n", n);
    else
        printf("%d NAO e um numero primo.\n", n);

    return 0;
}

/*
 * Questao 22: Geracao do Triangulo de Floyd com laços aninhados.
 *
 * Le N e imprime N linhas. A linha i tem i numeros consecutivos, comecando
 * em 1. Para N = 5 a saida e:
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * 11 12 13 14 15
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, linha, coluna;
    int numero = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: N deve ser positivo.\n");
        return 1;
    }

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d", numero);
            if (coluna < linha)
                printf(" ");
            numero++;
        }
        printf("\n");
    }

    return 0;
}

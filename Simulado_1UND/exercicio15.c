/*
 * Questao 15: Geracao de Padroes Visuais com Lacos Aninhados: Triangulo de Floyd.
 *
 * Le um inteiro positivo N e imprime N linhas do Triangulo de Floyd, onde
 * cada linha i contem i numeros sequenciais, continuando a contagem da
 * linha anterior. Para N = 5:
 *   1
 *   2 3
 *   4 5 6
 *   7 8 9 10
 *   11 12 13 14 15
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

    int n;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    int numero = 1;

    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            if (coluna > 1) {
                printf(" ");
            }
            printf("%d", numero);
            numero++;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}

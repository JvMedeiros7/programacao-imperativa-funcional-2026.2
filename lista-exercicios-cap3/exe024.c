/*
 * Questao 24: Padrao visual em X (diagonais cruzadas).
 *
 * Le uma dimensao impar N (3 a 19). Em uma grade N x N, desenha '*' onde
 * a coluna j esta na diagonal principal (j == i) ou na secundaria (j == N-1-i).
 * Para N = 5:
 * *   *
 *  * *
 *   *
 *  * *
 * *   *
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, i, j;

    do {
        printf("Digite N impar (3 a 19): ");
        scanf("%d", &n);
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == i || j == n - 1 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

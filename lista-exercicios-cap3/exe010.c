/*
 * Questao 10: Geracao de multiplos com formatacao em colunas.
 *
 * Exibe os 100 primeiros multiplos positivos de 3, 10 por linha, separados por \t.
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

    for (i = 1; i <= 100; i++) {
        printf("%d", 3 * i);

        if (i % 10 == 0)
            printf("\n");
        else
            printf("\t");
    }

    return 0;
}

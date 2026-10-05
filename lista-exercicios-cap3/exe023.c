/*
 * Questao 23: Desenho de moldura e quadrado vazado com caracteres.
 *
 * Le o lado L (3 a 20) e desenha um quadrado vazado com 'X'. Um caractere e
 * desenhado quando a posicao esta na borda (primeira/ultima linha ou coluna).
 * Para L = 5:
 * XXXXX
 * X   X
 * X   X
 * X   X
 * XXXXX
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int lado, i, j;

    do {
        printf("Digite o lado L (3 a 20): ");
        scanf("%d", &lado);
    } while (lado < 3 || lado > 20);

    for (i = 0; i < lado; i++) {
        for (j = 0; j < lado; j++) {
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1)
                printf("X");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

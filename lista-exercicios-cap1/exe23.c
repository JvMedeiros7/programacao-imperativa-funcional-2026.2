/*
 * Questao 23: Exibir no console uma figura simples (uma caixa retangular
 * vazia de 5x5) formada inteiramente pela letra 'X':
 *
 *     XXXXX
 *     X   X
 *     X   X
 *     X   X
 *     XXXXX
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    const int lado = 5;
    int linha, coluna;

    for (linha = 0; linha < lado; linha++) {
        for (coluna = 0; coluna < lado; coluna++) {
            /* Preenche apenas as bordas (primeira/ultima linha ou coluna),
               deixando o interior vazio. */
            if (linha == 0 || linha == lado - 1 ||
                coluna == 0 || coluna == lado - 1) {
                putchar('X');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}

/*
 * Questao 26: Desenhar um 'pinheiro de Natal' estilizado no console usando
 * a letra 'X', enriquecido com enfeites (*, o, +) espalhados pela arvore,
 * alem de um tronco na base.
 *
 *         X
 *        X*X
 *       X+XoX
 *      X*X+X*X
 *     XXXXXXXXX
 *         XX
 *         XX
 *        XXXX
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    /* Copa da arvore, do topo ate a base, com enfeites intercalados. */
    printf("    X\n");
    printf("   X*X\n");
    printf("  X+XoX\n");
    printf(" X*X+X*X\n");
    printf("XXXXXXXXX\n");

    /* Tronco. */
    printf("    XX\n");
    printf("    XX\n");
    printf("   XXXX\n");

    return 0;
}

/*
 * Questao 25: Desenhar a letra 'C' em formato ampliado, usando a propria
 * letra em sua composicao, por meio de uma UNICA instrucao printf():
 *
 *     CCCCC
 *     C
 *     C
 *     CCCCC
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    /* Uma unica chamada de printf(), com \n separando as quatro linhas. */
    printf("CCCCC\nC\nC\nCCCCC\n");

    return 0;
}

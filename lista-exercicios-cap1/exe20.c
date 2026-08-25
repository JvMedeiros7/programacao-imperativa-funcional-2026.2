/*
 * Questao 20: Desenhar uma moldura simples de 4 caracteres de largura
 * por 4 de altura usando caracteres graficos da tabela ASCII estendida
 * (Codepage 437).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    /* Garante que o terminal interprete a Codepage 437,
       necessaria para exibir corretamente os caracteres de linha. */
    SetConsoleOutputCP(437);
#endif

    const unsigned char cantoSupEsq = 0xC9;
    const unsigned char cantoSupDir = 0xBB;
    const unsigned char cantoInfEsq = 0xC8;
    const unsigned char cantoInfDir = 0xBC;
    const unsigned char linhaHorizontal = 0xCD;
    const unsigned char linhaVertical = 0xBA;

    /* Linha superior */
    putchar(cantoSupEsq);
    putchar(linhaHorizontal);
    putchar(linhaHorizontal);
    putchar(cantoSupDir);
    putchar('\n');

    /* Linhas do meio */
    for (int i = 0; i < 2; i++) {
        putchar(linhaVertical);
        putchar(' ');
        putchar(' ');
        putchar(linhaVertical);
        putchar('\n');
    }

    /* Linha inferior */
    putchar(cantoInfEsq);
    putchar(linhaHorizontal);
    putchar(linhaHorizontal);
    putchar(cantoInfDir);
    putchar('\n');

    return 0;
}

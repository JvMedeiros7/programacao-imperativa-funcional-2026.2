/*
 * Questao 22: Desenhar no console um carro e uma caminhonete utilizando
 * caracteres de bloco da tabela ASCII estendida (Codepage 437). Sao usadas
 * as sequencias de escape em hexadecimal \xDC (bloco inferior) e \xDF (bloco
 * superior), alem de \xDB (bloco cheio), com as rodas representadas por 'O'.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

/* Macros para os caracteres graficos de bloco (Codepage 437).
 * Escritos como literais de string para permitir concatenacao. */
#define CHEIO "\xDB" /* bloco cheio  */
#define BAIXO "\xDC" /* meio bloco inferior */
#define CIMA  "\xDF" /* meio bloco superior */

int main(void) {
#ifdef _WIN32
    /* Codepage 437 e necessaria para exibir corretamente os blocos graficos. */
    SetConsoleOutputCP(437);
#endif

    /* --- Carro (2 rodas) --- */
    printf("Carro:\n");
    printf("    " BAIXO BAIXO BAIXO BAIXO "\n");
    printf("  " BAIXO CHEIO CHEIO CHEIO CHEIO CHEIO CHEIO BAIXO "\n");
    printf("  " CHEIO CHEIO CHEIO CHEIO CHEIO CHEIO CHEIO CHEIO "\n");
    printf("   O       O\n");

    printf("\n");

    /* --- Caminhonete (3 rodas) --- */
    printf("Caminhonete:\n");
    printf("   " BAIXO BAIXO BAIXO "\n");
    printf("  " BAIXO CHEIO CHEIO CHEIO BAIXO BAIXO BAIXO BAIXO BAIXO "\n");
    printf("  " CHEIO CHEIO CHEIO CHEIO CHEIO CHEIO CHEIO CHEIO CHEIO "\n");
    printf("   O    O   O\n");

    return 0;
}

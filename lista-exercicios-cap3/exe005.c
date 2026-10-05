/*
 * Questao 05: Operador virgula e multiplas variaveis de controle.
 *
 * O laco for original executa 5 iteracoes (i = 0..4, j = 10..6). Na sexta
 * avaliacao i = 5 e j = 5, entao 5 < 5 e falso e o laco termina.
 * A parte c) reescreve o mesmo laco com while.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int i, j;

    /* a) e b) versao original com for */
    printf("Versao for:\n");
    for (i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    }

    /* c) mesma logica com while */
    printf("\nVersao while:\n");
    i = 0;
    j = 10;
    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }

    return 0;
}

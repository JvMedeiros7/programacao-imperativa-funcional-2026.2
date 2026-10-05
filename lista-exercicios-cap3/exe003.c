/*
 * Questao 03: Flexibilidade do laco for e omissao de expressoes.
 *
 * Trecho A: incremento por divisao (a /= 2). Imprime 36 18 9 4 2 1.
 * Trecho B: omissao de inicializacao e de incremento. O original usa getch()
 *           (conio.h, nao padrao). Aqui usa getchar() para compilar em qualquer
 *           compilador. Os parenteses em (ch = getchar()) sao necessarios porque
 *           '!=' tem precedencia maior que '='.
 * Trecho C: laco infinito. Sai com break quando o contador atinge 5.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a;
    int ch;
    int contador = 0;

    /* Trecho A */
    printf("Trecho A: ");
    for (a = 36; a > 0; a /= 2)
        printf("%d\t", a);
    printf("\n");

    /* Trecho B (digite caracteres e finalize com X) */
    printf("Trecho B: digite caracteres (X encerra): ");
    for (; (ch = getchar()) != 'X' ;)
        printf("%c", ch + 1);
    printf("\n");

    /* Trecho C: interrompe o laco infinito com break */
    for (;;) {
        printf("Laço Infinito\n");
        contador++;
        if (contador == 5)
            break;
    }

    return 0;
}

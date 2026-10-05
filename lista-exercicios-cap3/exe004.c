/*
 * Questao 04: Comandos de desvio de fluxo: break vs. continue.
 *
 * a) break: encerra imediatamente o laco mais interno que o contem.
 * b) continue: pula o restante do corpo da iteracao atual e executa a terceira
 *    expressao do for (o incremento), depois testa a condicao.
 * c) Em laços aninhados, o break interrompe apenas o laco interno.
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

    /* a) break dentro de for: para quando i == 5 */
    printf("a) break no for: ");
    for (i = 1; i <= 10; i++) {
        if (i == 5)
            break;
        printf("%d ", i);
    }
    printf("\n");

    /* a) break dentro de while */
    i = 1;
    printf("a) break no while: ");
    while (i <= 10) {
        if (i == 4)
            break;
        printf("%d ", i);
        i++;
    }
    printf("\n");

    /* b) continue dentro de for: pula os pares, mas i++ ainda acontece */
    printf("b) continue no for (so impares): ");
    for (i = 1; i <= 9; i++) {
        if (i % 2 == 0)
            continue;
        printf("%d ", i);
    }
    printf("\n");

    /* c) break no laco interno: o externo continua */
    printf("c) laços aninhados:\n");
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            if (j == 2)
                break;
            printf("   i = %d, j = %d\n", i, j);
        }
    }

    return 0;
}

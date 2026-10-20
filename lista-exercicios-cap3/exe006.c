/*
 * Questao 06: Laco sem corpo e incremento pos-fixado.
 *
 * Original: while (x++ < 5);
 * O teste usa o valor ANTES do incremento. Os testes sao 0<5, 1<5, ..., 5<5.
 * Nos 5 primeiros o teste e verdadeiro; no ultimo (5<5) e falso, mas x ja
 * foi incrementado para 6. Resultado final: x = 6.
 *
 * Versao explicita: como o teste compara o valor antigo, o equivalente sem
 * corpo vazio e while (x <= 5) { x++; }, que tambem termina com x = 6.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int x = 0;

    /* Original */
    while (x++ < 5);
    printf("Valor final de x = %d\n", x);

    /* c) Versao explicita, mesmo resultado */
    x = 0;
    while (x <= 5) {
        x++;
    }
    printf("Valor final de x (versao explicita) = %d\n", x);

    return 0;
}

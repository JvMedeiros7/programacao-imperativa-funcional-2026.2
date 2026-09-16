/*
 * Questao 08: Potencias e Divisao com Ponto Flutuante.
 *
 * Le um inteiro e exibe:
 *  a) o seu quadrado (inteiro);
 *  b) a sua decima parte (real, com duas casas decimais), garantindo que
 *     nao ocorra truncamento de divisao inteira.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    /* a) int * int -> int. Nao ha perda, pois o quadrado de um inteiro e inteiro. */
    int quadrado = numero * numero;

    /* b) Se fizessemos numero / 10 (int / int) o resultado seria truncado
       (ex.: 7 / 10 = 0). Ao dividir por 10.0 (double), o compilador promove
       numero para double e a divisao e feita em ponto flutuante (7 / 10.0 = 0.7). */
    double decima_parte = numero / 10.0;

    printf("Quadrado de %d: %d\n", numero, quadrado);
    printf("Décima parte de %d: %.2f\n", numero, decima_parte);

    return 0;
}

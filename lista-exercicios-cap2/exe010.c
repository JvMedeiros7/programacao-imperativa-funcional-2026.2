/*
 * Questao 10: Conversao de Temperatura de Celsius para Fahrenheit e Kelvin.
 *
 * Formulas: F = (C * 9/5) + 32     e     K = C + 273.15
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);   /* %lf e o especificador correto para double no scanf */

    /* Escrevemos 9.0 / 5.0 para deixar explicito que a fracao e real.
       Aqui, como celsius ja e double, "celsius * 9 / 5" tambem funcionaria
       (avaliacao da esquerda p/ direita promove tudo a double), mas 9 / 5
       sozinho seria a divisao inteira 1 -> resultado errado. */
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin     = celsius + 273.15;

    printf("%.2f °C equivalem a:\n", celsius);
    printf("  %.2f °F\n", fahrenheit);
    printf("  %.2f K\n", kelvin);

    return 0;
}

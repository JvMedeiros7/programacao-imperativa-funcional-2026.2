/*
 * Questao 24: Conversor de Velocidade de km/h para m/s.
 *
 * m/s = km/h / 3.6
 * (1 km = 1000 m e 1 h = 3600 s, logo 1000/3600 = 1/3.6)
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define FATOR_CONVERSAO 3.6

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double kmh;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);

    /* Divisao real: kmh e double e a constante 3.6 tambem. */
    double ms = kmh / FATOR_CONVERSAO;

    printf("%.2f km/h equivalem a %.2f m/s\n", kmh, ms);

    return 0;
}

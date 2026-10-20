/*
 * Questao 12: Tabela de conversao de temperaturas (Celsius, Fahrenheit e Kelvin).
 *
 * De 0 a 100 graus Celsius, de 5 em 5:
 *  F = (9 * C) / 5 + 32
 *  K = C + 273.15
 * Os valores sao impressos com duas casas decimais e colunas alinhadas.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int c;
    double f, k;

    printf("%10s %12s %12s\n", "Celsius", "Fahrenheit", "Kelvin");

    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5 + 32;     /* 9.0 evita divisao inteira */
        k = c + 273.15;
        printf("%10.2f %12.2f %12.2f\n", (double) c, f, k);
    }

    return 0;
}

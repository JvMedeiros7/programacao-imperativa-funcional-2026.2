/* Questao 27: Conversor de temperaturas modular. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int opcao;
    float t;
    printf("1 - Celsius para Fahrenheit\n2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n4 - Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    printf("Digite a temperatura: ");
    scanf("%f", &t);
    switch (opcao) {
        case 1: printf("Resultado = %.2f\n", celsiusParaFahrenheit(t)); break;
        case 2: printf("Resultado = %.2f\n", celsiusParaKelvin(t)); break;
        case 3: printf("Resultado = %.2f\n", fahrenheitParaCelsius(t)); break;
        case 4: printf("Resultado = %.2f\n", kelvinParaCelsius(t)); break;
        default: printf("Opção inválida!\n");
    }
    return 0;
}

float celsiusParaFahrenheit(float c) { return c * 9 / 5 + 32; }
float celsiusParaKelvin(float c) { return c + 273.15; }
float fahrenheitParaCelsius(float f) { return (f - 32) * 5 / 9; }
float kelvinParaCelsius(float k) { return k - 273.15; }

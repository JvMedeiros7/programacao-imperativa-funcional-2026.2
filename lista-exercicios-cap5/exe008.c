/* Questao 08: Conversor de Fahrenheit para Celsius. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

float celsius(float fahr);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    printf("Celsius = %.2f\n", celsius(f));
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32) * 5 / 9;
}

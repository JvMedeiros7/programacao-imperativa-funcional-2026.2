/* Questao 22: Biblioteca de areas com arquivo de cabecalho (areas.h). */

#include <stdio.h>
#include "areas.h"
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float raio, base, alt;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &alt);
    printf("Área do círculo = %.2f\n", A_CIRC(raio));
    printf("Área do retângulo = %.2f\n", A_RET(base, alt));
    printf("Área do triângulo = %.2f\n", A_TRI(base, alt));
    return 0;
}

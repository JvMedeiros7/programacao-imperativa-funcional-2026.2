/*
 * Questao 19: Condicao de existencia e tipo de triangulo pelos lados.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float a, b, c;

    printf("Digite o lado A: ");
    scanf("%f", &a);
    printf("Digite o lado B: ");
    scanf("%f", &b);
    printf("Digite o lado C: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c)
            printf("Triângulo Equilátero\n");
        else if (a == b || a == c || b == c)
            printf("Triângulo Isósceles\n");
        else
            printf("Triângulo Escaleno\n");
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }

    return 0;
}

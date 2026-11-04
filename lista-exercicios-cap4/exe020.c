/*
 * Questao 20: Equacao do segundo grau (formula de Bhaskara).
 */

#include <stdio.h>
#include <math.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    if (a == 0) {
        printf("Erro: a deve ser diferente de zero.\n");
        return 1;
    }
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;
    printf("Delta = %.2f\n", delta);

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}

/*
 * Questao 09: Geometria do Triangulo e Formula de Heron.
 *
 * Le os tres lados (a, b, c) e calcula a area do triangulo usando a
 * Formula de Heron: Area = sqrt(p * (p-a) * (p-b) * (p-c)), onde
 * p = (a + b + c) / 2.0 e o semiperimetro.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double a, b, c;

    printf("Digite o lado a: ");
    scanf("%lf", &a);
    printf("Digite o lado b: ");
    scanf("%lf", &b);
    printf("Digite o lado c: ");
    scanf("%lf", &c);

    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\nSemiperimetro: %.3f\n", p);
    printf("Area do triangulo: %.3f\n", area);

    system("PAUSE");
    return 0;
}

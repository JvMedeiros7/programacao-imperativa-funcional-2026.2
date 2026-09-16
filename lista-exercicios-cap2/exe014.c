/*
 * Questao 14: Formula de Heron para Triangulos Quaisquer.
 *
 * Area = sqrt(p * (p - a) * (p - b) * (p - c)),  onde  p = (a + b + c) / 2.0
 *
 * Compilar com:  gcc exe014.c -o exe014 -lm
 * (o -lm vincula a biblioteca matematica no Linux; no MinGW e opcional)
 */

#include <stdio.h>
#include <math.h>   /* sqrt() */
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

    /* Semi-perimetro: dividir por 2.0 (e nao 2) evita truncamento caso os
       lados fossem inteiros. */
    double p = (a + b + c) / 2.0;

    /* sqrt() recebe e devolve double. Se os lados nao formarem um triangulo
       valido (ex.: 1, 2, 10) o produto fica negativo e sqrt devolve NaN. */
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semi-perímetro: %.2f\n", p);
    printf("Área do triângulo (Heron): %.2f\n", area);

    return 0;
}

/*
 * Questao 17: Geometria do Circulo com Constantes.
 *
 * Le o raio (ponto flutuante) e exibe:
 *  Area          A = Pi * R^2
 *  Circunferencia C = 2 * Pi * R
 * Pi definido como a constante 3.141593.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define PI 3.141593

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double raio;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    /* R^2 escrito como raio * raio: nao existe operador de potencia em C
       (o ^ e o XOR bit a bit!). Para expoentes maiores usa-se pow(). */
    double area          = PI * raio * raio;
    double circunferencia = 2 * PI * raio;

    printf("Área: %.2f\n", area);
    printf("Circunferência: %.2f\n", circunferencia);

    return 0;
}

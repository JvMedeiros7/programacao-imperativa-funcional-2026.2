/*
 * Questao 07: Raiz quadrada (x >= 0) ou quadrado (x < 0) de um numero real.
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

    float x;

    printf("Digite um numero real: ");
    scanf("%f", &x);

    if (x >= 0)
        printf("Raiz quadrada de %.2f = %.2f\n", x, sqrt(x));
    else
        printf("Quadrado de %.2f = %.2f\n", x, x * x);

    return 0;
}

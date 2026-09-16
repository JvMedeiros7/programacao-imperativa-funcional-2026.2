/*
 * Questao 20: Teorema de Pitagoras e a Hipotenusa.
 *
 * hipotenusa = sqrt(lado_a^2 + lado_b^2)
 *
 * Compilar com -lm (usa pow() e sqrt() de <math.h>).
 */

#include <stdio.h>
#include <math.h>   /* pow(), sqrt() */
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double lado_a, lado_b;

    printf("Digite o cateto a: ");
    scanf("%lf", &lado_a);
    printf("Digite o cateto b: ");
    scanf("%lf", &lado_b);

    /* pow(x, 2) eleva ao quadrado; sqrt() extrai a raiz quadrada.
       Ambas trabalham com double. Poderiamos tambem escrever
       lado_a * lado_a + lado_b * lado_b em vez de pow(). */
    double hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}

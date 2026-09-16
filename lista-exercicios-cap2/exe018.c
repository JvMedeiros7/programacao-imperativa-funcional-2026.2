/*
 * Questao 18: Geometria da Esfera e Fracoes de Ponto Flutuante.
 *
 * Le o raio de uma esfera e calcula:
 *  Area de superficie  A = 4 * Pi * R^2
 *  Volume              V = (4.0/3.0) * Pi * R^3
 *
 * Atencao ao termo 4/3: se escrito com inteiros, 4 / 3 = 1 (truncamento)
 * e o volume sairia ~25% menor. Por isso usamos 4.0 / 3.0.
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

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    double area = 4 * PI * raio * raio;

    /* 4.0 / 3.0 = 1.3333... (real). Com 4 / 3 teriamos 1 (inteiro). */
    double volume = (4.0 / 3.0) * PI * raio * raio * raio;

    /* Demonstracao do erro: mesmo calculo com a fracao inteira. */
    double volume_errado = (4 / 3) * PI * raio * raio * raio;

    printf("Área de superfície: %.2f\n", area);
    printf("Volume (correto, 4.0/3.0): %.2f\n", volume);
    printf("Volume (ERRADO, 4/3 inteiro = 1): %.2f\n", volume_errado);

    return 0;
}

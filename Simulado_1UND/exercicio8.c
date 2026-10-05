/*
 * Questao 08: Calculos Geometricos e Constantes com <math.h>.
 *
 * Le o raio R de uma esfera e calcula:
 *   Area   = 4 * PI * R^2
 *   Volume = (4.0/3.0) * PI * R^3
 * usando pow() de <math.h>. Resultados exibidos com 3 casas decimais.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define PI 3.14159265

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double raio;

    printf("Digite o raio (R) da esfera: ");
    scanf("%lf", &raio);

    double area = 4 * PI * pow(raio, 2);
    double volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("\nArea da superficie: %.3f\n", area);
    printf("Volume:             %.3f\n", volume);

    system("PAUSE");
    return 0;
}

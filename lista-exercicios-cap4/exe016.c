/*
 * Questao 16: Eficiencia de consumo de combustivel (km/l).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Digite os litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Erro: os litros devem ser maiores que zero.\n");
        return 1;
    }

    consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0)
        printf("Venda o carro!\n");
    else if (consumo <= 14.0)
        printf("Econômico!\n");
    else
        printf("Super econômico!\n");

    return 0;
}

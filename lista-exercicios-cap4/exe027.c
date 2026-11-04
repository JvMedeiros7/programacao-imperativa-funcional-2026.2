/*
 * Questao 27: Tarifador de estacionamento com faixas progressivas.
 * 1a e 2a hora: R$ 2,00 | 3a e 4a hora: R$ 2,50 | 5a hora em diante: R$ 3,00.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int horas;
    float valor;

    printf("Digite o numero de horas: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: as horas devem ser maiores que zero.\n");
        return 1;
    }

    if (horas <= 2)
        valor = horas * 2.0;
    else if (horas <= 4)
        valor = 2 * 2.0 + (horas - 2) * 2.5;
    else
        valor = 2 * 2.0 + 2 * 2.5 + (horas - 4) * 3.0;

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor cobrado: R$ %.2f\n", valor);

    return 0;
}

/*
 * Questao 22: Imposto estadual sobre o valor do produto.
 * 1 = MG (7%), 2 = SP (12%), 3 = RJ (15%), 4 = MS (8%).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float valor, aliquota;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Estado de destino (1 = MG, 2 = SP, 3 = RJ, 4 = MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            aliquota = 0.07;
            break;
        case 2:
            aliquota = 0.12;
            break;
        case 3:
            aliquota = 0.15;
            break;
        case 4:
            aliquota = 0.08;
            break;
        default:
            printf("Erro: código de estado inválido!\n");
            return 1;
    }

    printf("Preço final com imposto: R$ %.2f\n", valor + valor * aliquota);

    return 0;
}

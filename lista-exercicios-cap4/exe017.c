/*
 * Questao 17: Pagamento (a vista com 10% de desconto ou parcelado em 3x)
 * e comissao do vendedor (5%).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float valor, final, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);
    printf("Forma de pagamento (1 = A Vista, 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        final = valor * 0.90;
        comissao = final * 0.05;
        printf("Valor a pagar à vista: R$ %.2f\n", final);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        comissao = valor * 0.05;
        printf("Valor de cada parcela (3x): R$ %.2f\n", valor / 3);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}

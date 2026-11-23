/* Questao 28: Caixa simples de mercadinho. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float preco, pago, subtotal, total;
    int quantidade, pagamento;

    printf("Preço unitário: ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    printf("Pagamento (1 - À vista, 2 - A prazo): ");
    scanf("%d", &pagamento);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, pagamento);
    printf("Subtotal = %.2f\n", subtotal);
    printf("Total a pagar = %.2f\n", total);

    printf("Valor pago: ");
    scanf("%f", &pago);
    if (pago < total)
        printf("Valor insuficiente!\n");
    else
        printf("Troco = %.2f\n", calculaTroco(total, pago));
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1)
        return valor * 0.9;
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}

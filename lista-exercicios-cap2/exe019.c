/*
 * Questao 19: Calculo de Salario Liquido com Desconto na Fonte.
 *
 * Encanador recebe R$ 30,00 por dia trabalhado. Sobre o valor bruto sao
 * descontados 8% de imposto de renda retido na fonte.
 *
 *  bruto   = dias * 30.00
 *  imposto = bruto * 0.08
 *  liquido = bruto - imposto   (equivale a bruto * 0.92)
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define VALOR_DIARIA 30.00
#define TAXA_IMPOSTO 0.08     /* 8% */

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int dias;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    /* int * double -> double: nao ha truncamento. */
    double bruto   = dias * VALOR_DIARIA;
    double imposto = bruto * TAXA_IMPOSTO;
    double liquido = bruto - imposto;

    printf("Dias trabalhados: %d\n", dias);
    printf("Salário bruto:    R$ %.2f\n", bruto);
    printf("Imposto (8%%):     R$ %.2f\n", imposto);   /* %% imprime o simbolo % */
    printf("Salário líquido:  R$ %.2f\n", liquido);

    return 0;
}

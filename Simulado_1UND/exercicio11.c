/*
 * Questao 11: Calculo Salarial com Gratificacao e Impostos.
 *
 * Diaria de R$ 45,00. Le os dias trabalhados, calcula o salario bruto,
 * adiciona 5% de gratificacao sobre o bruto e desconta 8% de imposto de
 * renda sobre o bruto, exibindo um holerite detalhado com o liquido a
 * receber.
 */

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define DIARIA 45.00

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int diasTrabalhados;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    double salarioBruto = diasTrabalhados * DIARIA;
    double gratificacao = salarioBruto * 0.05;
    double imposto = salarioBruto * 0.08;
    double salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("\n--------- HOLERITE ---------\n");
    printf("Dias trabalhados:   %d\n", diasTrabalhados);
    printf("Salario bruto:      R$ %.2f\n", salarioBruto);
    printf("Gratificacao (5%%):  R$ %.2f\n", gratificacao);
    printf("Imposto (8%%):       R$ %.2f\n", imposto);
    printf("-----------------------------\n");
    printf("Salario liquido:    R$ %.2f\n", salarioLiquido);

    system("PAUSE");
    return 0;
}

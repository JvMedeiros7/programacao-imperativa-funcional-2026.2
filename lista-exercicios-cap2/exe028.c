/*
 * Questao 28: Calculo de Salario Anual com Imposto Progressivo.
 *
 * Hora normal: R$ 10,00 | Hora extra: R$ 15,00 (adicional de 50%).
 * Le o total anual de horas normais e extras e exibe:
 *  a) salario anual bruto = normais * 10 + extras * 15
 *  b) imposto: isento ate R$ 12.000,00; 10% sobre o que EXCEDER essa faixa.
 *
 * A "decisao" e feita com o operador ternario (condicao ? valor1 : valor2),
 * sem if/else:
 *     excedente = (bruto > 12000) ? bruto - 12000 : 0
 *     imposto   = excedente * 0.10
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define VALOR_HORA_NORMAL 10.00
#define VALOR_HORA_EXTRA  15.00   /* 10.00 * 1.5 */
#define FAIXA_ISENCAO     12000.00
#define TAXA_IMPOSTO      0.10    /* 10% sobre o excedente */

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int horas_normais, horas_extras;

    printf("Digite o total de horas normais no ano: ");
    scanf("%d", &horas_normais);
    printf("Digite o total de horas extras no ano: ");
    scanf("%d", &horas_extras);

    /* a) Salario bruto anual (int * double -> double). */
    double bruto = horas_normais * VALOR_HORA_NORMAL + horas_extras * VALOR_HORA_EXTRA;

    /* b) Operador ternario: se o bruto passar da faixa, o excedente e a
       diferenca; caso contrario e zero (isento). O ternario tem precedencia
       menor que os relacionais e aritmeticos, entao os parenteses em volta
       da condicao sao apenas por legibilidade. */
    double excedente = (bruto > FAIXA_ISENCAO) ? bruto - FAIXA_ISENCAO : 0.0;
    double imposto   = excedente * TAXA_IMPOSTO;
    double liquido   = bruto - imposto;

    printf("\nHoras normais: %d x R$ %.2f\n", horas_normais, VALOR_HORA_NORMAL);
    printf("Horas extras:  %d x R$ %.2f\n", horas_extras, VALOR_HORA_EXTRA);
    printf("Salário anual bruto:      R$ %.2f\n", bruto);
    printf("Valor acima da isenção:   R$ %.2f\n", excedente);
    printf("Imposto (10%% do excedente): R$ %.2f\n", imposto);
    printf("Salário anual líquido:    R$ %.2f\n", liquido);

    return 0;
}

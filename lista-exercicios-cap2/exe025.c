/*
 * Questao 25: Salario Liquido com Gratificacao e Tributacao.
 *
 * Le o salario-base e calcula o liquido sabendo que:
 *  - gratificacao de 5% sobre o salario-base (soma)
 *  - imposto de 7% sobre o salario-base (subtrai)
 *
 * Justificativa da formula:
 *  liquido = base + base * 0.05 - base * 0.07
 *          = base * (1 + 0.05 - 0.07)         (fatorando a base)
 *          = base * 0.98
 * Ou seja, na pratica o funcionario recebe 98% do salario-base, pois o
 * imposto (7%) supera a gratificacao (5%) em 2 pontos percentuais.
 * Os operadores usados sao apenas * (percentuais), + (adicional) e
 * - (desconto), todos com precedencia natural: * antes de + e -.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define TAXA_GRATIFICACAO 0.05   /* 5% */
#define TAXA_IMPOSTO      0.07   /* 7% */

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double salario_base;

    printf("Digite o salário-base: R$ ");
    scanf("%lf", &salario_base);

    double gratificacao = salario_base * TAXA_GRATIFICACAO;
    double imposto      = salario_base * TAXA_IMPOSTO;

    /* Forma detalhada... */
    double salario_liquido = salario_base + gratificacao - imposto;

    /* ...e forma fatorada, equivalente: base * (1 + 0.05 - 0.07) = base * 0.98 */
    double salario_liquido_fatorado = salario_base * (1 + TAXA_GRATIFICACAO - TAXA_IMPOSTO);

    printf("Salário-base:       R$ %.2f\n", salario_base);
    printf("Gratificação (5%%):  R$ %.2f\n", gratificacao);
    printf("Imposto (7%%):       R$ %.2f\n", imposto);
    printf("Salário líquido:    R$ %.2f\n", salario_liquido);
    printf("(conferência fatorada: R$ %.2f)\n", salario_liquido_fatorado);

    return 0;
}

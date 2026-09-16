/*
 * Questao 26: Orcamento para Cercamento Perimetral de Terrenos.
 *
 * Le comprimento e largura do terreno (m) e o preco do metro de arame.
 * O cercamento usa 3 fios ao longo de todo o perimetro.
 *
 *  perimetro    = 2 * (comprimento + largura)
 *  metros_arame = perimetro * 3
 *  custo_total  = metros_arame * preco_metro
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define QTD_FIOS 3

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double comprimento, largura, preco_metro;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%lf", &comprimento);
    printf("Digite a largura do terreno (m): ");
    scanf("%lf", &largura);
    printf("Digite o preço do metro de arame farpado (R$): ");
    scanf("%lf", &preco_metro);

    /* Os parenteses sao obrigatorios: sem eles, 2 * comprimento + largura
       multiplicaria apenas o comprimento (precedencia de * sobre +). */
    double perimetro    = 2 * (comprimento + largura);
    double metros_arame = perimetro * QTD_FIOS;
    double custo_total  = metros_arame * preco_metro;

    printf("Perímetro do terreno: %.2f m\n", perimetro);
    printf("Arame a comprar (%d fios): %.2f m\n", QTD_FIOS, metros_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}

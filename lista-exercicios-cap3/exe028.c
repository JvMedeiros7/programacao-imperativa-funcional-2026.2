/*
 * Questao 28: Sistema de folha de pagamento com menu continuo (do-while & switch).
 *
 * Menu em um do-while que so termina quando a opcao 3 e escolhida.
 *  1 - Reajuste salarial: 15% ate R$ 2.000,00; 10% acima disso.
 *  2 - Retencao de IR:    8% ate R$ 3.000,00;  15% acima disso.
 *  3 - Encerrar programa.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int opcao;
    double salario, novo_salario, desconto;

    do {
        printf("\n=== FOLHA DE PAGAMENTO ===\n");
        printf("1 - Reajuste salarial\n");
        printf("2 - Retencao de Imposto de Renda\n");
        printf("3 - Encerrar programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Salario atual: R$ ");
                scanf("%lf", &salario);

                if (salario <= 2000.00)
                    novo_salario = salario * 1.15;
                else
                    novo_salario = salario * 1.10;

                printf("Novo salario: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("Salario bruto: R$ ");
                scanf("%lf", &salario);

                if (salario <= 3000.00)
                    desconto = salario * 0.08;
                else
                    desconto = salario * 0.15;

                printf("Desconto de IR: R$ %.2f\n", desconto);
                printf("Salario liquido: R$ %.2f\n", salario - desconto);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}

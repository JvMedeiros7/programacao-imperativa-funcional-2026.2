/*
 * Questao 26: Nome do mes e quantidade de dias (com fevereiro bissexto).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int mes, ano, dias;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    switch (mes) {
        case 1:
            printf("Janeiro");
            dias = 31;
            break;
        case 2:
            printf("Fevereiro");
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
                dias = 29;
            else
                dias = 28;
            break;
        case 3:
            printf("Março");
            dias = 31;
            break;
        case 4:
            printf("Abril");
            dias = 30;
            break;
        case 5:
            printf("Maio");
            dias = 31;
            break;
        case 6:
            printf("Junho");
            dias = 30;
            break;
        case 7:
            printf("Julho");
            dias = 31;
            break;
        case 8:
            printf("Agosto");
            dias = 31;
            break;
        case 9:
            printf("Setembro");
            dias = 30;
            break;
        case 10:
            printf("Outubro");
            dias = 31;
            break;
        case 11:
            printf("Novembro");
            dias = 30;
            break;
        case 12:
            printf("Dezembro");
            dias = 31;
            break;
        default:
            printf("Erro: mês inválido!\n");
            return 1;
    }

    printf(" tem %d dias\n", dias);

    return 0;
}

/*
 * Questao 28: URA de atendimento bancario com switch-case.
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

    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para a consulta de saldo...\n");
            break;
        case 2:
            printf("Direcionando para o extrato...\n");
            break;
        case 3:
            printf("Direcionando para a transferência...\n");
            break;
        case 4:
            printf("Aguarde, você será atendido por um de nossos atendentes...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

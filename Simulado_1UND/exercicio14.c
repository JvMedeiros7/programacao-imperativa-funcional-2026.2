/*
 * Questao 14: Autenticacao de Senha com Limite Finito de Tentativas.
 *
 * Senha secreta fixa (2026). Permite no maximo 3 tentativas usando um laco
 * while/for. Acertando, exibe "Acesso Concedido!" e encerra; errando as
 * 3 tentativas, exibe "Conta Bloqueada por Seguranca!".
 */

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define SENHA_CORRETA 2026
#define MAX_TENTATIVAS 3

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int senhaDigitada;
    int tentativas = 0;
    int acessoConcedido = 0;

    while (tentativas < MAX_TENTATIVAS && !acessoConcedido) {
        printf("Digite a senha (tentativa %d de %d): ", tentativas + 1, MAX_TENTATIVAS);
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == SENHA_CORRETA) {
            acessoConcedido = 1;
        } else {
            printf("Senha incorreta!\n\n");
        }

        tentativas++;
    }

    if (acessoConcedido) {
        printf("\nAcesso Concedido!\n");
    } else {
        printf("\nConta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}

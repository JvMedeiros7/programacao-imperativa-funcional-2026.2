/*
 * Questao 16: Autenticacao de senha com limite finito de tentativas.
 *
 * A senha secreta e 2026. O usuario tem no maximo 3 tentativas. Se acertar,
 * mostra o numero de tentativas usadas; se errar as 3, a conta e bloqueada.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define SENHA 2026
#define MAX_TENTATIVAS 3

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int senha;
    int tentativas = 0;
    int acertou = 0;

    while (tentativas < MAX_TENTATIVAS && !acertou) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha == SENHA)
            acertou = 1;
        else if (tentativas < MAX_TENTATIVAS)
            printf("Senha incorreta. Tentativas restantes: %d\n", MAX_TENTATIVAS - tentativas);
    }

    if (acertou)
        printf("Acesso Concedido! Tentativas utilizadas: %d\n", tentativas);
    else
        printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}

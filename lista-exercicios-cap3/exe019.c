/*
 * Questao 19: Calculo do N-esimo termo da sequencia de Fibonacci.
 *
 * Sequencia: 1, 1, 2, 3, 5, 8, 13, ...
 * Lista todos os termos ate o N-esimo e imprime o valor desse termo.
 * Usa long long; a partir do termo 93 o valor estoura esse tipo.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, i;
    long long int anterior = 0;
    long long int atual = 1;
    long long int proximo;
    long long int termo_n = 0;

    printf("Digite o numero do termo (N): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Erro: N deve ser maior ou igual a 1.\n");
        return 1;
    }

    printf("Termos ate N: ");
    for (i = 1; i <= n; i++) {
        printf("%lld ", atual);
        termo_n = atual;

        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }
    printf("\n");

    printf("Termo %d da sequencia de Fibonacci: %lld\n", n, termo_n);

    return 0;
}

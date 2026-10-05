/*
 * Questao 13: Calculo de fatorial com tratamento de casos especiais.
 *
 * Le N e calcula N!. Usa long long int para suportar valores maiores antes de
 * estourar. Observacao: 20! ainda cabe em long long; a partir de 21! ocorre
 * estouro. Negativos geram mensagem de erro. 0! = 1 e 1! = 1 saem do laco
 * sem iteracoes.
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
    long long int fatorial = 1;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
    } else {
        for (i = 2; i <= n; i++)
            fatorial *= i;

        printf("%d! = %lld\n", n, fatorial);
    }

    return 0;
}

/*
 * Questao 09: Acumulador de valores reais com sentinela de parada negativa.
 *
 * Le valores reais ate o usuario digitar um negativo. O negativo de parada nao
 * entra nos calculos. Exibe quantidade, soma e media.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double valor;
    double soma = 0.0;
    int quantidade = 0;

    printf("Digite um valor real positivo (negativo encerra): ");
    scanf("%lf", &valor);

    while (valor >= 0.0) {
        soma += valor;
        quantidade++;

        printf("Digite um valor real positivo (negativo encerra): ");
        scanf("%lf", &valor);
    }

    printf("\nQuantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0)
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    else
        printf("Nenhum valor valido foi digitado, a media nao existe.\n");

    return 0;
}

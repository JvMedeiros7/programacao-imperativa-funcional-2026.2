/*
 * Questao 28: Ler tres valores inteiros informados pelo usuario, calcular a
 * media aritmetica simples como um numero real de dupla precisao (double) e
 * exibir o resultado com exatamente duas casas decimais.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b, c;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &c);

    /* A divisao por 3.0 (double) forca a media a ser calculada em ponto
       flutuante de dupla precisao, evitando o truncamento da divisao inteira. */
    double media = (a + b + c) / 3.0;

    printf("A media aritmetica dos tres valores é: %.2f\n", media);

    return 0;
}

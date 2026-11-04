/*
 * Questao 10: Paridade e sinal de um numero inteiro.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("O número é PAR\n");
    else
        printf("O número é ÍMPAR\n");

    if (num > 0)
        printf("O número é POSITIVO\n");
    else if (num < 0)
        printf("O número é NEGATIVO\n");
    else
        printf("O número é ZERO\n");

    return 0;
}

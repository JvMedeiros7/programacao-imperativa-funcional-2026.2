/*
 * Questao 11: Ordenacao crescente de tres inteiros, sem usar vetores.
 * Compara os pares e troca os valores com uma variavel auxiliar.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b, c, aux;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("Ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}

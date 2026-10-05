/*
 * Questao 18: Inversao de digitos de um numero inteiro (algoritmo numerico).
 *
 * Enquanto n > 0, extrai o ultimo digito com % 10 e remove-o com / 10,
 * montando o invertido: invertido = invertido * 10 + digito.
 * Observacao: zeros a esquerda do resultado desaparecem (ex: 1200 -> 21).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;
    int invertido = 0;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 1;
    }

    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}

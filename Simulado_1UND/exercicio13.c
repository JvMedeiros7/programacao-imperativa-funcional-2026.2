/*
 * Questao 13: Calculo do Fatorial com Tratamento do Zero e Tipo long long int.
 *
 * Le um inteiro N e calcula N!. 0! = 1 e 1! = 1. O resultado e armazenado
 * em long long int (especificador %lld) para suportar valores grandes sem
 * estouro prematuro. Numeros negativos sao tratados como entrada invalida.
 */

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;

    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("\nEntrada invalida: nao existe fatorial de numero negativo.\n");
    } else {
        long long int fatorial = 1;

        for (int i = 2; i <= n; i++) {
            fatorial *= i;
        }

        printf("\n%d! = %lld\n", n, fatorial);
    }

    system("PAUSE");
    return 0;
}

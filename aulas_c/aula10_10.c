#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif
#include <conio.h> // Biblioteca para funções getch() e getche()


int main(void) {

    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    int n;
    int soma;
    int i;
    char resposta;

    do {
        printf("Digite um número: ");
        scanf("%d", &n);

        soma = 0;

        printf("O valor de %d² =", n);

        for (i = 0; i < n; i++) {
            soma += 2 * i + 1;
            printf(" %d", 2 * i + 1);
        }

        printf(" = %d\n", soma);

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("Programa encerrado.\n");

    return 0;

}
/*
 * Questao 15: Filtragem numerica simultanea com operadores logicos.
 *
 * Le um limite NUM e imprime os numeros de 1 a NUM que sao multiplos de 3 E de 5
 * ao mesmo tempo (ou seja, multiplos de 15). Se nenhum satisfizer, avisa.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int num, i;
    int encontrou = 0;

    printf("Digite o limite NUM: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum numero entre 1 e %d e multiplo de 3 e de 5 ao mesmo tempo.\n", num);

    return 0;
}

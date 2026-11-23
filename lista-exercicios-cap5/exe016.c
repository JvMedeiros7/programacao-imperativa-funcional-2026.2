/* Questao 16: Ano bissexto. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int ehBissexto(int ano);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (ehBissexto(ano))
        printf("%d é bissexto\n", ano);
    else
        printf("%d não é bissexto\n", ano);
    return 0;
}

int ehBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

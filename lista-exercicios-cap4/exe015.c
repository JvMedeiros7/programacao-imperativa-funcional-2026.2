/*
 * Questao 15: Elegibilidade para aposentadoria.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int idade, tempo;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico (anos): ");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25))
        printf("O trabalhador pode se aposentar.\n");
    else
        printf("O trabalhador não pode se aposentar.\n");

    return 0;
}

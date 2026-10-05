/*
 * Questao 12: Validacao de Entrada de Dados com Laco Garantido (do-while).
 *
 * Solicita uma nota no intervalo fechado [0.0, 10.0]. Enquanto o valor
 * digitado for invalido, exibe mensagem de erro e repete a solicitacao.
 * Usa do-while pois a entrada precisa ser lida pelo menos uma vez antes
 * de a condicao poder ser testada.
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

    float nota;

    do {
        printf("Digite uma nota valida (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Tente novamente.\n\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("\nNota valida digitada: %.1f\n", nota);

    system("PAUSE");
    return 0;
}

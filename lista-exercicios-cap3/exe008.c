/*
 * Questao 08: Validacao de entrada de dados com laco garantido (do-while).
 *
 * Pede uma nota entre 0.0 e 10.0. Se estiver fora do intervalo, mostra erro e
 * pede de novo. So encerra com uma nota valida.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float nota;

    do {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0f || nota > 10.0f)
            printf("Erro: nota invalida! Use um valor entre 0.0 e 10.0.\n");
    } while (nota < 0.0f || nota > 10.0f);

    printf("Nota registrada com sucesso!\n");

    return 0;
}

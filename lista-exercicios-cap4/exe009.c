/*
 * Questao 09: Media ponderada (pesos 2, 3 e 5) e situacao do aluno.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float lab, semestral, final, media;

    printf("Nota do Trabalho de Laboratorio: ");
    scanf("%f", &lab);
    printf("Nota da Avaliacao Semestral: ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final: ");
    scanf("%f", &final);

    media = (lab * 2 + semestral * 3 + final * 5) / 10;
    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0)
        printf("Situação: Reprovado\n");
    else if (media < 5.0)
        printf("Situação: Em Recuperação\n");
    else
        printf("Situação: Aprovado\n");

    return 0;
}

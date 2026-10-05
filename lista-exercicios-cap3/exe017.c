/*
 * Questao 17: Estatisticas de turma (menor, maior, media e contagem).
 *
 * Le notas reais ate o usuario digitar -1.0 (sentinela, que nao entra no calculo).
 * Ao final exibe o total de alunos, a maior nota, a menor nota e a media.
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
    float maior = 0.0f;
    float menor = 0.0f;
    float soma = 0.0f;
    int alunos = 0;

    printf("Digite a nota do aluno (-1.0 encerra): ");
    scanf("%f", &nota);

    while (nota != -1.0f) {
        if (alunos == 0 || nota > maior)
            maior = nota;
        if (alunos == 0 || nota < menor)
            menor = nota;

        soma += nota;
        alunos++;

        printf("Digite a nota do aluno (-1.0 encerra): ");
        scanf("%f", &nota);
    }

    printf("\na) Total de alunos avaliados: %d\n", alunos);

    if (alunos > 0) {
        printf("b) Maior nota da turma: %.2f\n", maior);
        printf("c) Menor nota da turma: %.2f\n", menor);
        printf("d) Media geral da turma: %.2f\n", soma / alunos);
    } else {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}

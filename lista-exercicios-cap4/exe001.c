/*
 * Questao 01: Atribuicao (=) versus igualdade (==) dentro do if.
 *
 * a) if (x = 0) ATRIBUI 0 a x e o resultado da expressao e 0 (falso). Entao o
 *    bloco do if NUNCA executa, e x fica valendo 0 depois do teste.
 * b) Em C nao existe tipo booleano na condicao: qualquer valor diferente de 0
 *    (inteiro ou real) e VERDADEIRO, e somente o valor 0 e FALSO.
 * c) if (x = -5) atribui -5 a x, e -5 e diferente de 0, entao a condicao e
 *    VERDADEIRA e o bloco e executado (pelo padrao ANSI C, a expressao de
 *    atribuicao tem o valor da variavel apos a atribuicao).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int x = 10;

    if (x = 0)
        printf("a) Entrou no if (x = 0)\n");
    else
        printf("a) Nao entrou no if (x = 0), e x agora vale %d\n", x);

    if (x = -5)
        printf("c) Entrou no if (x = -5), x vale %d\n", x);
    else
        printf("c) Nao entrou no if (x = -5)\n");

    if (3.5)
        printf("b) 3.5 e verdadeiro\n");
    if (0.0)
        printf("b) isso nao aparece, 0.0 e falso\n");

    return 0;
}

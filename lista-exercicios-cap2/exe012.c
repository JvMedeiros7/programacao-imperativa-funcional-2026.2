/*
 * Questao 12: Operadores Unarios de Antecessor e Sucessor.
 *
 * Le um inteiro e, usando EXCLUSIVAMENTE os operadores ++ e --, exibe o
 * seu antecessor e o seu sucessor.
 *
 * Justificativa da implementacao:
 *  - Copiamos o valor lido para duas variaveis auxiliares para nao perder
 *    o numero original.
 *  - Em "antecessor", aplicamos --  (uma unidade a menos).
 *  - Em "sucessor",   aplicamos ++  (uma unidade a mais).
 *  - Usamos a forma PREFIXADA (--x / ++x) porque a instrucao esta isolada;
 *    nesse contexto prefixado e pos-fixado dao o mesmo resultado final,
 *    mas o prefixado deixa claro que queremos o valor ja alterado.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int antecessor = numero;   /* copia para preservar o original */
    int sucessor   = numero;

    --antecessor;              /* equivale a antecessor = antecessor - 1 */
    ++sucessor;                /* equivale a sucessor   = sucessor   + 1 */

    printf("Antecessor de %d: %d\n", numero, antecessor);
    printf("Sucessor   de %d: %d\n", numero, sucessor);

    return 0;
}

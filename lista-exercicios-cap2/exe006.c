/*
 * Questao 06: Comportamento e Precedencia dos Incrementos.
 *
 *  a) ++n (prefixado): PRIMEIRO incrementa n, DEPOIS o valor ja incrementado
 *     e usado na expressao. Trecho A imprime: n = 6, x = 6.
 *     m++ (pos-fixado): PRIMEIRO o valor atual de m e usado na expressao,
 *     DEPOIS m e incrementado. Trecho B imprime: m = 6, y = 5.
 *
 *  b) printf("%d\t%d\t%d\n", n, n+1, n++);
 *     O padrao C NAO define a ordem em que os argumentos de uma funcao sao
 *     avaliados. Alem disso, a variavel n e modificada (n++) e lida (n, n+1)
 *     na mesma expressao sem um "ponto de sequencia" entre esses acessos.
 *     Isso e COMPORTAMENTO INDEFINIDO: um compilador pode avaliar n++ antes
 *     e imprimir "6 7 5", outro pode avaliar depois e imprimir "5 6 5", e
 *     nenhum deles esta errado. A solucao e nunca alterar uma variavel mais
 *     de uma vez (ou alterar e ler) dentro da mesma expressao.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    /* Trecho A: pre-incremento -> incrementa e so entao atribui. */
    int n = 5;
    int x = ++n;
    printf("Trecho A: n = %d, x = %d\n", n, x);

    /* Trecho B: pos-incremento -> atribui o valor antigo e so entao incrementa. */
    int m = 5;
    int y = m++;
    printf("Trecho B: m = %d, y = %d\n", m, y);

    /* Item b: a forma CORRETA e separar as modificacoes em instrucoes distintas,
       garantindo pontos de sequencia entre elas. */
    int v = 5;
    int v_mais_um = v + 1;
    printf("Forma segura: %d\t%d\t%d\n", v, v_mais_um, v);
    v++;   /* incremento isolado, sem ambiguidade */
    printf("Após o incremento isolado: v = %d\n", v);

    return 0;
}

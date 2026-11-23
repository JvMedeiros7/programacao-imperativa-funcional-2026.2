/*
 * Questao 04: Recursao - caso base, passo recursivo e pilha de execucao.
 *
 * a) Caso base: n == 0 retorna 1. Passo recursivo: n * fatorial(n - 1).
 *    Sem o caso base a funcao chamaria a si mesma indefinidamente ate estourar
 *    a pilha (stack overflow).
 * b) fatorial(4) - empilhamento:
 *      fatorial(4) -> 4 * fatorial(3)
 *      fatorial(3) -> 3 * fatorial(2)
 *      fatorial(2) -> 2 * fatorial(1)
 *      fatorial(1) -> 1 * fatorial(0)
 *      fatorial(0) -> 1 (caso base)
 *    desempilhamento:
 *      fatorial(1) = 1 * 1 = 1
 *      fatorial(2) = 2 * 1 = 2
 *      fatorial(3) = 3 * 2 = 6
 *      fatorial(4) = 4 * 6 = 24
 * c) Cada chamada cria um novo registro de ativacao na pilha (parametros,
 *    variaveis locais, endereco de retorno). Sem caso base as chamadas nunca
 *    terminam, a pilha enche e o programa falha.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long fatorial(int n);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("fatorial(4) = %ld\n", fatorial(4));
    return 0;
}

long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}

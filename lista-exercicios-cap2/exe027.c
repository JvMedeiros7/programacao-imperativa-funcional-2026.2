/*
 * Questao 27: Geracao de Valores Aleatorios via Resto de Divisao.
 *
 * Gera tres numeros inteiros aleatorios no intervalo [1, 6], simulando o
 * lancamento de tres dados, com rand()/srand() de <stdlib.h> e o operador %.
 *
 * Como funciona:
 *  - rand() devolve um inteiro pseudoaleatorio entre 0 e RAND_MAX.
 *  - rand() % 6 devolve o RESTO da divisao por 6 -> sempre um valor de 0 a 5.
 *  - Somando 1, deslocamos o intervalo para 1 a 6.
 *  - srand(semente) inicializa o gerador; sem isso, rand() produz SEMPRE a
 *    mesma sequencia a cada execucao. Usamos time(NULL) (segundos desde
 *    01/01/1970) como semente para variar a cada execucao.
 */

#include <stdio.h>
#include <stdlib.h>   /* rand(), srand(), RAND_MAX */
#include <time.h>     /* time() */
#ifdef _WIN32
#include <windows.h>
#endif

#define FACES_DADO 6

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    /* Semente baseada no relogio: deve ser chamada UMA unica vez. */
    srand((unsigned int) time(NULL));

    /* Cada expressao gera um valor independente de 1 a 6. */
    int dado1 = rand() % FACES_DADO + 1;
    int dado2 = rand() % FACES_DADO + 1;
    int dado3 = rand() % FACES_DADO + 1;

    printf("Lançamento dos dados:\n");
    printf("  Dado 1: %d\n", dado1);
    printf("  Dado 2: %d\n", dado2);
    printf("  Dado 3: %d\n", dado3);
    printf("  Soma:   %d\n", dado1 + dado2 + dado3);

    return 0;
}

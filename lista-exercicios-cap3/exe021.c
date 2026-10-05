/*
 * Questao 21: Jogo de adivinhacao com letras aleatorias e dicas (rand()).
 *
 * Sorteia uma letra minuscula entre 'a' e 'z' com rand() % 26 + 'a'. A cada
 * tentativa errada informa se a letra secreta vem antes ou depois da digitada.
 * srand(time(NULL)) faz o sorteio mudar a cada execucao; sem ele, rand()
 * produz sempre a mesma sequencia.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    char secreta;
    char tentativa;
    int tentativas = 0;

    srand((unsigned) time(NULL));
    secreta = rand() % 26 + 'a';

    printf("Adivinhe a letra minuscula (a a z).\n");

    do {
        printf("Sua tentativa: ");
        scanf(" %c", &tentativa);
        tentativas++;

        if (tentativa < secreta)
            printf("A letra secreta vem DEPOIS de '%c'.\n", tentativa);
        else if (tentativa > secreta)
            printf("A letra secreta vem ANTES de '%c'.\n", tentativa);
    } while (tentativa != secreta);

    printf("Parabens! Voce acertou a letra '%c' em %d tentativa(s).\n", secreta, tentativas);

    return 0;
}

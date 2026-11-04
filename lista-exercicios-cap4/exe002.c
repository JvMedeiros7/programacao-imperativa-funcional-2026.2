/*
 * Questao 02: Associacao do else e aninhamento de decisoes.
 *
 * a) Com x = 15 e y = 5 e impresso "Opcao B". O else NAO pertence ao
 *    if (x > 10), como a identacao sugere: ele pertence ao if mais proximo,
 *    o if (y > 10). Como x > 10 e verdadeiro, entra no if interno; y > 10 e
 *    falso, entao executa o else interno.
 * b) Regra: o else sempre se associa ao if mais proximo que ainda nao tem
 *    else, dentro do mesmo bloco.
 * c) Com chaves, o else fica ligado ao if (x > 10); com x = 15 nada e
 *    impresso, pois x <= 10 e falso.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int x = 15, y = 5;

    printf("Codigo original (sem chaves):\n");
    if (x > 10)
        if (y > 10)
            printf("Opcao A\n");
    else
        printf("Opcao B\n");

    printf("\nCom chaves (Opcao B so quando x <= 10):\n");
    if (x > 10) {
        if (y > 10) {
            printf("Opcao A\n");
        }
    } else {
        printf("Opcao B\n");
    }

    return 0;
}

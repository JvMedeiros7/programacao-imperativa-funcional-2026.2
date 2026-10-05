/*
 * Questao 10: Resto da Divisao (%) e Decomposicao do Tempo.
 *
 * Le uma quantidade inteira de segundos e exibe o tempo equivalente
 * decomposto em horas, minutos e segundos restantes.
 * Ex.: 3665 segundos -> 1 hora, 1 minuto e 5 segundos.
 */

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int totalSegundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    int horas = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60;

    printf("\n%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n",
           totalSegundos, horas, minutos, segundos);

    system("PAUSE");
    return 0;
}

/*
 * Questao 27: Ler do usuario (scanf) um intervalo de tempo em segundos e
 * exibir o equivalente em Horas, Minutos e Segundos.
 * Exemplo: 3665 segundos -> 1 hora, 1 minuto e 5 segundos.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int totalSegundos;

    printf("Digite um intervalo de tempo em segundos: ");
    scanf("%d", &totalSegundos);

    /* Decompoe o total em horas, minutos e segundos restantes. */
    int horas   = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n",
           totalSegundos, horas, minutos, segundos);

    return 0;
}

/*
 * Questao 23: Calculo de Horario de Termino de Experimento Biologico.
 *
 * Recebe horas, minutos e segundos de inicio (separadamente) e a duracao
 * em segundos. Exibe o horario de termino no formato hh:mm:ss usando
 * apenas / e %.
 *
 * Estrategia:
 *  1) Converter o horario de inicio para um total de segundos desde 00:00:00:
 *        inicio_seg = h*3600 + m*60 + s
 *  2) Somar a duracao:  fim_seg = inicio_seg + duracao
 *  3) Decompor de volta:
 *        horas    = (fim_seg / 3600) % 24   -> % 24 "vira" o dia se passar de 23h
 *        minutos  = (fim_seg % 3600) / 60   -> sobra apos tirar as horas, em minutos
 *        segundos =  fim_seg % 60           -> sobra apos tirar os minutos
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define SEG_POR_MINUTO 60
#define SEG_POR_HORA   3600
#define HORAS_POR_DIA  24

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int h, m, s, duracao;

    printf("Hora de início (0-23): ");
    scanf("%d", &h);
    printf("Minuto de início (0-59): ");
    scanf("%d", &m);
    printf("Segundo de início (0-59): ");
    scanf("%d", &s);
    printf("Duração do experimento (em segundos): ");
    scanf("%d", &duracao);

    /* 1) e 2): tudo em segundos. */
    int inicio_seg = h * SEG_POR_HORA + m * SEG_POR_MINUTO + s;
    int fim_seg    = inicio_seg + duracao;

    /* 3): decomposicao com divisao inteira (/) e resto (%). */
    int fim_h = (fim_seg / SEG_POR_HORA) % HORAS_POR_DIA;
    int fim_m = (fim_seg % SEG_POR_HORA) / SEG_POR_MINUTO;
    int fim_s =  fim_seg % SEG_POR_MINUTO;

    /* Dias completos que se passaram (informativo). */
    int dias = fim_seg / (SEG_POR_HORA * HORAS_POR_DIA);

    printf("Início:  %02d:%02d:%02d\n", h, m, s);
    printf("Término: %02d:%02d:%02d  (+%d dia(s))\n", fim_h, fim_m, fim_s, dias);

    return 0;
}

/*
 * Questao 16: Quantidade de Degraus em uma Escada de Obra.
 *
 * Le a altura de cada degrau (em CENTIMETROS) e a altura total desejada
 * (em METROS) e calcula o numero MINIMO de degraus necessarios.
 *
 * Compatibilidade de unidades: 1 metro = 100 centimetros, entao a altura
 * total e convertida para centimetros antes da divisao.
 *
 * Compilar com -lm (usa ceil() de <math.h>).
 */

#include <stdio.h>
#include <math.h>   /* ceil() - arredonda para cima */
#ifdef _WIN32
#include <windows.h>
#endif

#define CM_POR_METRO 100.0

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double altura_degrau_cm, altura_total_m;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%lf", &altura_degrau_cm);
    printf("Digite a altura total a alcançar (em metros): ");
    scanf("%lf", &altura_total_m);

    /* Conversao de unidade: metros -> centimetros. */
    double altura_total_cm = altura_total_m * CM_POR_METRO;

    /* Se a divisao nao for exata (ex.: 250 cm / 20 cm = 12.5), o trabalhador
       precisa de um degrau A MAIS para efetivamente alcancar a altura; por isso
       arredondamos para cima com ceil() e convertemos para inteiro. */
    int degraus = (int) ceil(altura_total_cm / altura_degrau_cm);

    printf("Altura total em cm: %.2f\n", altura_total_cm);
    printf("Número mínimo de degraus: %d\n", degraus);

    return 0;
}

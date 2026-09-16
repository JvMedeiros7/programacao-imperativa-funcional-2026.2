/*
 * Questao 11: Conversor de Angulos de Graus para Radianos.
 *
 * Formula: radianos = graus * (Pi / 180.0), com Pi definido como a constante
 * 3.141593.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

/* Constante simbolica: o pre-processador substitui PI pelo literal antes
   da compilacao. Alternativa: const double PI = 3.141593; */
#define PI 3.141593

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double graus;

    printf("Digite o ângulo em graus: ");
    scanf("%lf", &graus);

    /* 180.0 (e nao 180) garante a divisao em ponto flutuante. */
    double radianos = graus * (PI / 180.0);

    printf("%.2f graus = %.4f radianos\n", graus, radianos);

    return 0;
}

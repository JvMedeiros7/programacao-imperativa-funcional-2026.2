/*
 * Questao 15: Calculo de Media Aritmetica Simples e Ponderada.
 *
 * Le quatro notas e exibe, com duas casas decimais:
 *  a) media simples    = (n1 + n2 + n3 + n4) / 4
 *  b) media ponderada  = (n1*1 + n2*1 + n3*2 + n4*2) / (1 + 1 + 2 + 2)
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

/* Pesos das provas como constantes simbolicas. */
#define PESO_P1 1
#define PESO_P2 1
#define PESO_P3 2
#define PESO_P4 2

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float n1, n2, n3, n4;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    /* a) As notas sao float, entao a divisao por 4 ja e real. */
    float media_simples = (n1 + n2 + n3 + n4) / 4.0f;

    /* b) Cada nota e multiplicada pelo seu peso e o total e dividido pela
       soma dos pesos (1 + 1 + 2 + 2 = 6). A soma dos pesos e int, mas o
       numerador e float, logo a divisao e feita em ponto flutuante. */
    float media_ponderada = (n1 * PESO_P1 + n2 * PESO_P2 + n3 * PESO_P3 + n4 * PESO_P4)
                            / (PESO_P1 + PESO_P2 + PESO_P3 + PESO_P4);

    printf("Média aritmética simples: %.2f\n", media_simples);
    printf("Média ponderada (pesos 1,1,2,2): %.2f\n", media_ponderada);

    return 0;
}

/*
 * Questao 13: Calculo de Areas de Figuras Planas Basicas.
 *
 * Programa unificado que calcula:
 *  a) area do quadrado de lado L            -> L * L
 *  b) area do retangulo de base B e altura H -> B * H
 *  c) area do triangulo retangulo B e H      -> (B * H) / 2
 * Todas as entradas e saidas sao de ponto flutuante.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float lado, base, altura;

    /* a) Quadrado */
    printf("=== Quadrado ===\n");
    printf("Digite o lado L: ");
    scanf("%f", &lado);
    float area_quadrado = lado * lado;
    printf("Área do quadrado: %.2f\n\n", area_quadrado);

    /* b) e c) compartilham a mesma base e altura */
    printf("=== Retângulo e Triângulo Retângulo ===\n");
    printf("Digite a base B: ");
    scanf("%f", &base);
    printf("Digite a altura H: ");
    scanf("%f", &altura);

    float area_retangulo = base * altura;

    /* Como base e altura sao float, dividir por 2 ja gera resultado real;
       usamos 2.0f por clareza. */
    float area_triangulo = (base * altura) / 2.0f;

    printf("Área do retângulo: %.2f\n", area_retangulo);
    printf("Área do triângulo retângulo: %.2f\n", area_triangulo);

    return 0;
}

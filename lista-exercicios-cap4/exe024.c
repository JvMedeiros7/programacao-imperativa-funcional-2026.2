/*
 * Questao 24: Classificacao de triangulo pelos angulos internos.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b, c;

    printf("Digite o primeiro angulo: ");
    scanf("%d", &a);
    printf("Digite o segundo angulo: ");
    scanf("%d", &b);
    printf("Digite o terceiro angulo: ");
    scanf("%d", &c);

    if (a + b + c != 180) {
        printf("Erro: a soma dos ângulos deve ser 180!\n");
        return 1;
    }

    if (a == 90 || b == 90 || c == 90)
        printf("Triângulo Retângulo\n");
    else if (a > 90 || b > 90 || c > 90)
        printf("Triângulo Obtusângulo\n");
    else
        printf("Triângulo Acutângulo\n");

    return 0;
}

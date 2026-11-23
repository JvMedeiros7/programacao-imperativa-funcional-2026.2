/* Questao 13: Calculadora com quatro operacoes. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int opcao;
    float a, b;

    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    printf("Escolha a operação: ");
    scanf("%d", &opcao);
    printf("Digite os dois operandos: ");
    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1: printf("Resultado = %.2f\n", soma(a, b)); break;
        case 2: printf("Resultado = %.2f\n", subtrai(a, b)); break;
        case 3: printf("Resultado = %.2f\n", multiplica(a, b)); break;
        case 4:
            if (b == 0)
                printf("Erro: divisão por zero!\n");
            else
                printf("Resultado = %.2f\n", divide(a, b));
            break;
        default: printf("Opção inválida!\n");
    }
    return 0;
}

float soma(float a, float b) { return a + b; }
float subtrai(float a, float b) { return a - b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

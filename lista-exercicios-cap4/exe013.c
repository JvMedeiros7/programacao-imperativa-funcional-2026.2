/*
 * Questao 13: Calculadora com menu switch (+, -, *, /, ^).
 * A divisao valida divisor zero e a potenciacao usa pow().
 */

#include <stdio.h>
#include <math.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    char op;
    float a, b;

    printf("Operações: + (Soma), - (Subtração), * (Multiplicação), / (Divisão), ^ (Potência)\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &op);

    printf("Digite o primeiro operando: ");
    scanf("%f", &a);
    printf("Digite o segundo operando: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0)
                printf("Erro: divisão por zero!\n");
            else
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            break;
        case '^':
            printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
            break;
        default:
            printf("Operação inválida!\n");
    }

    return 0;
}

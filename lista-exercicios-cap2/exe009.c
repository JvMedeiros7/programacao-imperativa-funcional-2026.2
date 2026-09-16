/*
 * Questao 09: Operacoes Aritmeticas Basicas e Cast de Tipos.
 *
 * Le dois inteiros e exibe soma, subtracao, multiplicacao e divisao REAL
 * (com duas casas decimais). A divisao usa cast explicito para evitar o
 * truncamento da divisao inteira.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    int soma          = a + b;
    int subtracao     = a - b;
    int multiplicacao = a * b;

    /* Cast explicito: (double) a converte APENAS o operando a para double.
       Como um dos operandos e real, o outro (b) e promovido automaticamente e
       a divisao ocorre em ponto flutuante. Sem o cast, 7 / 2 daria 3 e nao 3.5.
       Atencao: (double)(a / b) NAO funciona, pois a divisao inteira ja teria
       acontecido antes da conversao. */
    double divisao = (double) a / b;

    /* Como evitar a divisao por zero apenas com os recursos deste capitulo?
       Sem if/else, a saida e usar o operador ternario para "proteger" o
       divisor, ex.: double divisao = (b != 0) ? (double) a / b : 0.0;
       Matematicamente, a divisao por zero e indefinida, entao o programa
       deve garantir b != 0 antes de dividir (ou informar que nao ha resultado). */

    printf("Soma:          %d + %d = %d\n", a, b, soma);
    printf("Subtração:     %d - %d = %d\n", a, b, subtracao);
    printf("Multiplicação: %d * %d = %d\n", a, b, multiplicacao);
    printf("Divisão real:  %d / %d = %.2f\n", a, b, divisao);

    return 0;
}

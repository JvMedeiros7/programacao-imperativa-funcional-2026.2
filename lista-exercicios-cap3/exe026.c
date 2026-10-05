/*
 * Questao 26: Mapeamento e soma de primos em um intervalo fechado [A, B].
 *
 * Le A e B (positivos, com A < B), lista os primos de A a B e exibe a soma.
 * A funcao eh_primo usa a mesma contagem de divisores da questao 25.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int eh_primo(int n) {
    int i;
    int divisores = 0;

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            divisores++;
    }

    return divisores == 2;
}

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b, i;
    int soma = 0;
    int encontrou = 0;

    do {
        printf("Digite A (positivo): ");
        scanf("%d", &a);
        printf("Digite B (positivo, maior que A): ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b)
            printf("Valores invalidos. Garanta 0 < A < B.\n");
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos no intervalo [%d, %d]:\n", a, b);

    for (i = a; i <= b; i++) {
        if (eh_primo(i)) {
            printf("%d\n", i);
            soma += i;
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum primo no intervalo.\n");

    printf("Soma dos primos encontrados: %d\n", soma);

    return 0;
}

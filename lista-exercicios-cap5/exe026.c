/* Questao 26: Sequencia de Fibonacci recursiva. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long fibonacci(int n);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, i;
    printf("Quantidade de termos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf("%ld ", fibonacci(i));
    printf("\n");
    return 0;
}

/*
 * A versao recursiva fica lenta para n grande porque recalcula os mesmos
 * subproblemas muitas vezes (fibonacci(n-1) e fibonacci(n-2) refazem o mesmo
 * trabalho), com crescimento exponencial no numero de chamadas.
 */
long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

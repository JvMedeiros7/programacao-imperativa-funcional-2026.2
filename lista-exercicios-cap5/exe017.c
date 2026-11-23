/* Questao 17: Fatorial iterativo e recursivo. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;
    long it, rec;
    printf("Digite um inteiro não negativo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erro: número negativo.\n");
        return 1;
    }
    it = fatorialIterativo(n);
    rec = fatorialRecursivo(n);
    printf("Iterativo: %ld\nRecursivo: %ld\n", it, rec);
    if (it == rec)
        printf("Os resultados coincidem.\n");
    else
        printf("Os resultados são diferentes.\n");
    return 0;
}

long fatorialIterativo(int n) {
    long r = 1;
    int i;
    for (i = 2; i <= n; i++)
        r *= i;
    return r;
}

long fatorialRecursivo(int n) {
    if (n == 0)
        return 1;
    return n * fatorialRecursivo(n - 1);
}

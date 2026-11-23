/* Questao 14: Soma dos digitos com recursao. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int somaDigitos(int n);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    printf("Soma dos dígitos = %d\n", somaDigitos(n));
    return 0;
}

int somaDigitos(int n) {
    if (n == 0)                              /* caso base */
        return 0;
    return n % 10 + somaDigitos(n / 10);     /* passo recursivo */
}

/* Questao 09: Maior de dois numeros. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int maior(int a, int b);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("O maior é %d\n", maior(a, b));
    return 0;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}

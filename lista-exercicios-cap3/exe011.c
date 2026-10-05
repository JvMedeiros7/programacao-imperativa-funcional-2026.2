/*
 * Questao 11: Intervalo numerico dinamico (crescente e decrescente).
 *
 * Le dois inteiros A e B e imprime todos os inteiros do intervalo fechado.
 * Se A <= B a ordem e crescente; se A > B a ordem e decrescente.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b, i;

    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);

    if (a <= b) {
        for (i = a; i <= b; i++)
            printf("%d ", i);
    } else {
        for (i = a; i >= b; i--)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

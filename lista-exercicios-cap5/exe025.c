/* Questao 25: MDC com recursao (Euclides) e fracao simplificada. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b;
    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);
    printf("MDC = %d\n", mdc(a, b));
    simplifica(a, b);
    return 0;
}

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int d = mdc(num, den);
    printf("Fração simplificada: %d/%d\n", num / d, den / d);
}

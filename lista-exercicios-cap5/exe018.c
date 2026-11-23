/* Questao 18: Potencia com recursao. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long potencia(int base, int expoente);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int base, expoente;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);
    if (expoente < 0) {
        printf("Erro: expoente negativo.\n");
        return 1;
    }
    printf("%d ^ %d = %ld\n", base, expoente, potencia(base, expoente));
    return 0;
}

long potencia(int base, int expoente) {
    if (expoente == 0)                                /* caso base */
        return 1;
    return base * potencia(base, expoente - 1);       /* passo recursivo */
}

/* Questao 23: Macro versus funcao. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define DOBRO(x) x*2

int dobro(int x);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("Macro DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("Função dobro(2+3) = %d\n", dobro(2+3));
    /*
     * Diferem porque a macro e substituicao de texto: DOBRO(2+3) vira 2+3*2 = 8.
     * A funcao recebe o valor ja calculado (5) e retorna 10.
     */

#undef DOBRO
#define DOBRO(x) ((x)*2)
    printf("Macro corrigida DOBRO(2+3) = %d\n", DOBRO(2+3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}

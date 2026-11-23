/* Questao 24: Compilacao condicional para depuracao. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

/* #define DEBUG */
/*
 * Sem "#define DEBUG" (linha acima comentada): imprime so o resultado final.
 * Com "#define DEBUG" (descomentando a linha): imprime tambem a soma parcial a
 * cada iteracao. O codigo de depuracao so existe no executavel quando DEBUG
 * esta definido, pois a decisao e do pre-processador.
 */

int somaAteN(int n);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Soma de 1 até %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;
    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("DEBUG: i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}

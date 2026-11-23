/* Questao 19: Contagem regressiva recursiva. */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Erro: n deve ser positivo.\n");
        return 1;
    }
    contagem(n);
    contagemCrescente(n);
    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

/*
 * Na versao crescente a chamada recursiva vem ANTES do printf: os numeros sao
 * impressos so no desempilhamento, na ordem inversa das chamadas (1 ate n). Na
 * regressiva o printf vem antes da chamada e imprime no empilhamento (n ate 1).
 */
void contagemCrescente(int n) {
    if (n == 0)
        return;
    contagemCrescente(n - 1);
    printf("%d\n", n);
}

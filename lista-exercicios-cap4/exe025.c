/*
 * Questao 25: Troco na menor quantidade de cedulas (100, 50, 20, 10, 5 e 2).
 * Usa divisao inteira para a quantidade e o operador % para o resto.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int total, entregue, troco;
    int c100, c50, c20, c10, c5, c2;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &entregue);

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente!\n");
        return 1;
    }

    troco = entregue - total;
    printf("Troco: R$ %d\n", troco);

    c100 = troco / 100;
    troco = troco % 100;
    c50 = troco / 50;
    troco = troco % 50;
    c20 = troco / 20;
    troco = troco % 20;
    c10 = troco / 10;
    troco = troco % 10;
    c5 = troco / 5;
    troco = troco % 5;
    c2 = troco / 2;
    troco = troco % 2;

    if (c100 > 0)
        printf("%d cédula(s) de R$ 100\n", c100);
    if (c50 > 0)
        printf("%d cédula(s) de R$ 50\n", c50);
    if (c20 > 0)
        printf("%d cédula(s) de R$ 20\n", c20);
    if (c10 > 0)
        printf("%d cédula(s) de R$ 10\n", c10);
    if (c5 > 0)
        printf("%d cédula(s) de R$ 5\n", c5);
    if (c2 > 0)
        printf("%d cédula(s) de R$ 2\n", c2);

    if (troco > 0)
        printf("Sobrou R$ %d que não pode ser pago com essas cédulas.\n", troco);

    return 0;
}

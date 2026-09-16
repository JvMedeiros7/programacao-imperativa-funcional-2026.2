/*
 * Questao 03: Formatacao de Saida em Bases Numericas e ASCII.
 *
 * Le um unico inteiro e exibe, em uma unica mensagem, o valor em:
 * decimal (%d), hexadecimal minusculo (%x), octal (%o) e como caractere
 * ASCII (%c).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int numero;

    printf("Digite um número inteiro (ex.: 65): ");
    scanf("%d", &numero);

    /* Um unico printf com quatro especificadores recebendo a mesma variavel.
       %d -> base 10 | %x -> base 16 (a-f) | %o -> base 8 | %c -> tabela ASCII */
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | Caractere ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}

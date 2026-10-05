/*
 * Questao 20: Tabela de caracteres ASCII e codigos hexadecimais.
 *
 * Para os codigos decimais de 32 a 126 (imprimiveis), imprime o valor decimal,
 * o valor em hexadecimal (formatador %X) e o caractere correspondente.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int codigo;

    printf("Decimal  Hex  Caractere\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%7d  %3X  %c\n", codigo, codigo, codigo);
    }

    return 0;
}

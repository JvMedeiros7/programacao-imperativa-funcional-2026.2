#include <stdio.h>

int main() {

    char c = 'A'; /* Caractere */
    printf("char: %c " , c) ; /* Tamanho de um caractere */

    char ca = 'A'; /* Caractere */
    printf("\nchar: %c " , ca) ; /* Tamanho de um caractere */

    printf("\nTamanho de um caractere 1 : %zu bytes" , sizeof('A')); /* Tamanho de um caractere */

    printf("\nTamanho de um caractere char : %zu bytes" , sizeof(char)); /* Tamanho de um caractere */

    return 0;
}
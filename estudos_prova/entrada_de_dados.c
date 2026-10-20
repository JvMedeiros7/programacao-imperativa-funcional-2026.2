#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {

    printf("Digite um caractere no getchar: ");
    char c1 = getchar();
    printf("char: %c " , c1) ;

    printf("\nDigite um caractere no getch: ");
    char c2 = getch();
    printf("\nchar: %c " , c2) ;

    printf("\nDigite um caractere no getche: ");
    char c3 = getche();
    printf("\nchar: %c " , c3) ;

    printf("\nputchar escreve na tela: ");
    putchar(c1);

    return 0;
}

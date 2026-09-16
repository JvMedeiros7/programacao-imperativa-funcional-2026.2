/*
 * Questao 21: Leitura de Caractere e Exibicao de seu Codigo ASCII.
 *
 * Le um caractere e o exibe formatado como inteiro (%d).
 *
 * O que esse numero representa?
 *  Em C, o tipo char e na verdade um tipo INTEIRO de 1 byte (8 bits).
 *  Cada caractere e armazenado na memoria como um numero: o seu codigo na
 *  tabela ASCII (American Standard Code for Information Interchange).
 *  Ex.: 'A' = 65, 'a' = 97, '0' = 48, ' ' (espaco) = 32, '\n' = 10.
 *  Quando imprimimos com %c o printf mostra o simbolo; com %d, mostra o
 *  numero que realmente esta guardado no byte.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);   /* espaco antes de %c ignora ENTERs residuais */

    /* A mesma variavel impressa de duas formas: como simbolo e como inteiro. */
    printf("Caractere: %c\n", caractere);
    printf("Código ASCII (decimal): %d\n", caractere);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define PI 3.14159265358979323846 /* Definindo uma constante */

int main() {

    /* Variáveis, tipos e constantes */

    /* 
    - Toda váriavel em C deve ser declarada antes de ser usada 
    - Varias variáveis podem ser declaradas na mesma linha, separadas por vírgula: int a, b, c;
    - Podem ser inicializadas na declaração: int a = 10, b = 20, c = 30;
    - O tipo de uma variável determina o tamanho e o layout da memória, o intervalo de valores que podem ser armazenados e as operações que podem ser realizadas sobre ela.
    - O tipo de uma variável também determina o tipo de valor que ela pode armazenar, como inteiro, ponto flutuante, caractere, etc.
    
    */

    /* Nomes de Variáveis 
    
    - Só letras, números e sublinhados (_) são permitidos em nomes de variáveis.
    - O primeiro caractere deve ser uma letra ou um sublinhado (_).
    - Nomes de variáveis são case-sensitive, ou seja, maiúsculas e minúsculas são diferentes.
    - Nomes de variáveis não podem ser palavras reservadas da linguagem C, como int, float, return, etc.
    - Nomes de variáveis devem ser descritivos e significativos, para facilitar a leitura e manutenção do código.
    - Nomes de variáveis não podem conter espaços em branco.
    
    */

    /*Tipos de dados*/

    printf("Tipos de dados em C:\n");

    char c = 'A'; /* Caractere */
    printf("char: %c " , c) ; /* Tamanho de um caractere */

    unsigned char uc = 255; /* Caractere sem sinal */
    printf("\nunsigned char: %d " , uc) ; /* Tamanho de um caractere sem sinal */

    short s = 32767; /* Inteiro curto */
    printf("\nshort: %d " , s) ; /* Tamanho de um inteiro curto */

    unsigned short us = 32767; /* Inteiro curto sem sinal */
    printf("\nunsigned short: %d " , us) ; /* Tamanho de um inteiro curto sem sinal */

    int i = 214; /* Inteiro */
    printf("\nint: %d " , i) ; /* Tamanho de um inteiro */

    int j = -1423411; /* Inteiro */
    printf("\nint: %d " , j) ; /* Tamanho de um inteiro */

    unsigned int ui = -1423411; /* Inteiro sem sinal */
    printf("\nunsigned int: %u " , ui) ; /* Tamanho de um inteiro sem sinal */

    float f = 3.14; /* Ponto flutuante */
    printf("\nfloat: %f " , f) ; /* Tamanho de um ponto flutuante */

    double d = 3.141592653589793; /* Ponto flutuante de precisão dupla */
    printf("\ndouble: %lf " , d) ; /* Tamanho de um ponto flutuante de precisão dupla */

    long double ld = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006606315588174881520920962829254091715364367892590360011330530548820466521384146951941511609433057270365759591953092186117381932611793105118548074462379962749567351885752724891227938183011949128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450; /* Ponto flutuante de precisão estendida */
    printf("\nlong double: %Lg " , ld) ; /* Tamanho de um ponto flutuante de precisão estendida */

    void *ptr = NULL; /* Ponteiro */
    printf("\nvoid *: %p " , ptr) ; /* Tamanho de um ponteiro */

    /* Size off */

    printf("\n\nTamanho de cada tipo de dado em bytes:\n");
    printf("char: %zu bytes\n", sizeof(char));
    printf("unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("short: %zu bytes\n", sizeof(short));
    printf("unsigned short: %zu bytes\n", sizeof(unsigned short));
    printf("int: %zu bytes\n", sizeof(int));
    printf("unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long double: %zu bytes\n", sizeof(long double));
    printf("void *: %zu bytes\n", sizeof(void *));


    /* Constantes */
 
    const int constante = 10; /* Constante inteira */
    printf("\nConstante inteira: %d " , constante) ; /* Tamanho de uma constante inteira */


    #define PI 3.14159265358979323846 /* Definindo uma constante */
    printf("\nConstante PI: %f " , PI) ; /* Tamanho de uma constante de ponto flutuante */
    
    return 0;
}
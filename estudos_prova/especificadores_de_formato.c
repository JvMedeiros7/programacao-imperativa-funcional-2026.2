#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    /*  Especificados de formato */

    printf("--- ESPECIFICADORES DE FORMATO ---\n\n");

    printf("%%d = inteiro decimal: %d \n", 123);

    printf("%%x ou %%X = inteiro hexadecimal: %x ou %X \n", 123, 123);

    printf("%%o = inteiro octal: %o \n", 123);

    printf("%%c = caractere único (ASCII): %c \n", 65);

    printf("%%f = ponto flutuante: %f \n", 3.14159);

    printf("%%lf = ponto flutuante de precisão dupla: %lf \n", 3.14159);

    printf("%%s = string de caracteres: %s \n", "abc");

    printf("%%ld = inteiro decimal longo: %ld \n", 1234567890L);

    printf("%%lld = inteiro decimal longo longo: %lld \n", 123456789012345LL);

    printf("%%p = ponteiro (endereço de memória): %p \n", &main);

    printf("%%u = inteiro decimal sem sinal: %u \n", 123);


    /* Tamanho de campo e precisão */

    printf("\n--- TAMANHO DE CAMPO E PRECISAO ---\n\n");

    printf("%%10d = inteiro decimal com tamanho de campo 10: %10d \n", 123);

    printf("%%.2f = ponto flutuante com precisão de 2 casas decimais: %.2f \n", 3.14159);

    /* A largura é menor que o valor, então o valor é preenchido com espaços à esquerda */

    /* O alinhamento padrão é a direita */

    printf("O 1 texto vai ficar alinhado para a direita: %10d \n", 123);
    printf("O 2 texto vai ficar alinhado para a direita: %10d \n", 123);

    /* Para alinhar à esquerda, use o sinal de menos (-) */

    printf("O 1 texto vai ficar alinhado para a esquerda: %-10d \n", 123);
    printf("O 2 texto vai ficar alinhado para a esquerda: %-10d \n", 123);


    return 0;
}
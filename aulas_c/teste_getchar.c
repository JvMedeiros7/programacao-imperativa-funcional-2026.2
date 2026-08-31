#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif
#include <conio.h> // Biblioteca para funções getch() e getche()


//Operadores 

int main(){
    
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    // Quando operandos de tipos diferentes estão em uma expressão, o tipo de menor tamanho em bytes é convertido para o de maior tamanho


    //Funções getche() e getch() - são funções usadas para ler um único caractere do teclado sem a necessidade de pressionar Enter. A função getche() exibe o caractere digitado na tela, enquanto getch() não exibe.

    char caractere;
    printf("Pressione uma tecla: ");
    char tecla = getche(); // Lê um caractere do teclado e o exibe na tela
    printf("\nVocê pressionou: %c\n", tecla); // Exibe o caractere digitado pelo usuário

    printf("Sucessora ASCII do caractere digitado: %d\n", tecla + 1); // Exibe o valor ASCII do caractere digitado incrementado em 1


    // Função getchar() - é usada para ler um único caractere do teclado, mas ao contrário de getch() e getche(), ela requer que o usuário pressione Enter após digitar o caractere.

    printf("Pressione uma tecla e depois Enter: ");
    char tecla2 = getchar(); // Lê um caractere do teclado após o usuário pressionar Enter
    printf("Você pressionou: %c\n", tecla2); // Exibe o caractere digitado pelo usuário1


    // Função putchar() - é usada para exibir um único caractere na tela. Por exemplo, "putchar('A');" exibirá o caractere 'A' no console.
    putchar(tecla2); // Exibe o caractere digitado pelo usuário usando putchar()

    // Operadores de incremento (++) e decremento (--) - são usados para aumentar ou diminuir o valor de uma variável em 1. Por exemplo, "x++" incrementa o valor de x em 1, enquanto "x--" decrementa o valor de x em 1.

    int x = 2;

    // Exemplos de incremento:

    x = x + 1; // Incrementa x em 1, agora x é 6
    x++;       // Incrementa x em 1, agora x é 7
    --x;       // Decrementa x em 1, agora x é 6

    printf("Valor final de x: %d\n", x);


    int n = 5;
    int y;
    y = n++; // Pós incremento ++ // y recebe o valor de n (5) e depois n é incrementado para 6
    printf("Valor de y: %d, Valor de n: %d\n", y, n); // Exibe y = 5 e n = 6

    int n2 = 10;
    int y2;
    y2 = ++n2; // Pré incremento ++ // n2 é incrementado para 11 e depois y2 recebe o valor de n2 (11)
    printf("Valor de y2: %d, Valor de n2: %d\n", y2, n2); // Exibe y2 = 11 e n2 = 11


    // Operadores de Atribuição Composta (+=, -=, *=, /=, %=) - são usados para combinar uma operação aritmética com uma atribuição. Por exemplo, "x += 5;" é equivalente a "x = x + 5;".

    int i = 1;
    // Sintaxe e Equivalência

    i += 5; // Equivalente a i = i + 5; // i agora é 6
    printf("Valor de i: %d\n", i); // Exibe i = 6

    i -= 2; // Equivalente a i = i - 2; // i agora é 4
    printf("Valor de i: %d\n", i); // Exibe i = 4

    i /= 2; // Equivalente a i = i / 2; // i agora é 2
    printf("Valor de i: %d\n", i); // Exibe i = 2 

    i *= 3; // Equivalente a i = i * 3; // i agora é 6
    printf("Valor de i: %d\n", i); // Exibe i = 6

    i %= 4; // Equivalente a i = i % 4; // i agora é 2
    printf("Valor de i: %d\n", i); // Exibe i = 2

    // Operadores Relacionais (==, !=, <, >, <=, >=) - são usados para comparar dois valores. Eles retornam 1 (verdadeiro) se a comparação for verdadeira e 0 (falso) se for falsa. Por exemplo, "x == y" verifica se x é igual a y.

    int verdadeiro = (15 < 20); // Verdadeiro, pois 15 é menor que 20
    int falso = (15 > 20); // Falso, pois 15 não é maior que 20

    printf("Resultado da comparação 15 < 20: %d\n", verdadeiro); // Exibe 1 (verdadeiro)
    printf("Resultado da comparação 15 > 20: %d\n", falso); // Exibe 0 (falso)
    
    // Operadores Lógicos (&&, ||, !) - são usados para combinar expressões booleanas. 

    // O operador && (E lógico) retorna verdadeiro se ambas as expressões forem verdadeiras. 
    //O operador || (OU lógico) retorna verdadeiro se pelo menos uma das expressões for verdadeira. 
    //O operador ! (NÃO lógico) inverte o valor de uma expressão booleana.

    int a = 1; // Verdadeiro
    int b = 0; // Falso

    int c = (a && b); // Falso, pois a é verdadeiro e b é falso
    int d = (a || b); // Verdadeiro, pois a é verdadeiro
    int e = !a; // Falso, pois a é verdadeiro

    printf("Resultado de a && b: %d\n", c); // Exibe 0 (falso)
    printf("Resultado de a || b: %d\n", d); // Exibe 1 (verdadeiro)
    printf("Resultado de !a: %d\n", e); // Exibe 0 (falso)



    return 0;

}



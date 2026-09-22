#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif
#include <conio.h> // Biblioteca para funções getch() e getche()


//Laços de Repetição (Loops) - são estruturas de controle que permitem executar um bloco de código repetidamente enquanto uma condição for verdadeira. Em C, os principais tipos de loops são: for, while e do-while.

int main(){
    
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    printf("Hello, World!\n");

    unsigned char ch;

    // For usado como while, ou seja, enquanto a condição for verdadeira, o loop continuará executando.

    for(ch = getch(); ch != 'X'; ch = getch()){
        printf("Você digitou: %c\n", ch + 1 );
    }
    printf("Você digitou a letra correta para sair do programa 'X'!\n");

    // For usado como while, ou seja, enquanto a condição for verdadeira, o loop continuará executando. 

    for (; (ch = getch()) != 'Q';){
        printf("Você digitou: %c\n", ch + 1 );
    }
    printf("Você digitou a segunda letra correta para sair do programa 'Q'!\n");

    return 0;
}
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
    int rand_num;

    // Loop infinito 
    
    for(;;){
        printf("%d ", rand() % 2);
    }

    system("pause");

    return 0;
}
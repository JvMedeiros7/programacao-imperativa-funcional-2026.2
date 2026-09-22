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

    char resp, secreto;
    int tentativas;

    do{
        system ("cls"); // Limpa a tela (Windows)
        secreto = rand() % 26 + 'a'; // Gera uma letra aleatória entre 'a' e 'z'
        tentativas = 1;

        printf("Adivinhe a letra secreta (entre 'a' e 'z'): ");

        while((resp = getche()) != secreto){
            printf("\nVocê errou! Tente novamente: ");
            tentativas++;
            printf("\nTentativa %d: ", tentativas);
        }

        printf("Correto a letra foi %c! Você acertou em %d tentativas.\n", secreto, tentativas);
    
    }while(resp != 's' && resp != 'n');

    do{
        printf("Deseja jogar novamente? (s/n): ");
        resp = getch();
    }while(resp != 's' && resp != 'n');


    system("pause");

    return 0;
}
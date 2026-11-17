#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif
#include <conio.h> // Biblioteca para funções getch() e getche()


int main(void) {

    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif
    
    char ch;

    do{
        system("cls"); // Limpa a tela


        int jogo[6];
        printf(".:: Programa de Sorteio da Mega Sena ::.\n\n");

        for (int i = 0; i < 6; i++) {
            jogo[i] = rand() % 60 + 1; // Gera um número aleatório entre 1 e 60
        }

        for (int i = 0; i < 6; i++) {
            printf("%d ", jogo[i]);
        }
    }
    do{
        printf("\n\nDeseja gerar outro jogo? (s/n): ");
        ch = getch(); // Lê um caractere sem exibir na tela
    }while (ch != 's' && ch != 'n');

    system("pause");
    
    return 0;
}
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
    
    int jogo[6];

    printf(".:: Mega da Virada ::.\n\n");

    for (int i = 0; i < 6; i++){
        int numero = rand () % 60 + 1; // Gera um número aleatório entre 1 e 60
            if (i > 0) {
                // Verifica se o número já foi sorteado
                for (int j = 0; j < i; j++) {
                    if (jogo[j] == numero) {
                        // Se o número já foi sorteado, gera um novo número
                        do{
                            numero = rand () % 60 + 1;
                        } while (numero == jogo[j]);
                        j = -1; // Reinicia a verificação
                    }
                }
            }
            jogo[i] = numero;
            printf("%d ", numero);  
    }


    system("pause");
    
    return 0;
}
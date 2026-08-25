#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de utilidades
#ifdef _WIN32 
  #include <windows.h> // Inclui a biblioteca do Windows para manipulação de console
#endif

int main() {

    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Configura o console para usar a codificação UTF-8 no Windows
    #endif

  
    printf("Existem %d dias em um ano.\n", 365); // Imprime a mensagem com o número de dias em um ano
    printf("\n"); // Imprime uma linha em branco para separar as mensagens
    system("pause"); // Pausa a execução do programa até que o usuário pressione uma tecla

    return 0;  
}
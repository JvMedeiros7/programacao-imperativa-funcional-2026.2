#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de utilidades
#ifdef _WIN32 
  #include <windows.h> // Inclui a biblioteca do Windows para manipulação de console
#endif

int main() {

    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Configura o console para usar a codificação UTF-8 no Windows
    #endif

    printf("\tum\n\t\tdois\n\t\t\ttrês"); // Única chamada de printf com tabulação em cascata

    return 0;  
}
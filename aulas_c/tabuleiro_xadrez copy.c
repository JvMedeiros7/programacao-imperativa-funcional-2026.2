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
    
    int lin, col;

    ((lin + col) % 2 == 0) ? printf("██") : printf("  ");

    _getch();
    system("pause");
    
    return 0;
}
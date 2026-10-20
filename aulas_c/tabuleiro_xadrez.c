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

    for(int lin = 0; lin < 8; lin++){
        for(int col = 0; col < 8; col++){
            if((lin + col) % 2 == 0){
                printf("██");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    _getch();
    system("pause");
    
    return 0;
}
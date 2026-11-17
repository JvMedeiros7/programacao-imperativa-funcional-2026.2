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
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }

    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
    
    return 0;
}
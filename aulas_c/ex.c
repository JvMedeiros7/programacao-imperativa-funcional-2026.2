#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif
#include <conio.h> 


int main(){
    
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    int i;

    for(i=1; i<11; i++){
        printf("Tabuada do %d:\n", i);
        for(int j=1; j<i; j++){
            printf("\n");
            printf("%d * %d = %d\n", j, i, j * i);
        }
        printf("\n");
    }

    for(i=0; i<256; i++){
        printf("%d = %c\n", i, i);
    }

    for(i=0; i < 6; i++){
        printf("\n");
        printf("o número é  %d", i, rand() % 100);
    }


    printf("\n");
    system("pause");

    return 0;
}


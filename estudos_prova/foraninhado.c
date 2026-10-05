#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    int i , j , c;

    for(i = 1 ; i <= 10 ; i++){
        printf("\n\nTabuada do %d : \n" , i);
        for(j = 1; j <= 10; j++){
            c = i * j;
            printf("%d x %d = %d \n" , i , j , c);
        }
    }


    int numero_secreto = rand() % 100 + 1; /* Gera um número aleatório entre 1 e 100 */


}
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    /* Laços de Repetições */

    /* Laço for 
    
    for (inicialização; condição; incremento) {
        // bloco de código a ser executado
    }
    
    */

    int i;
    for(i = 0; i <= 10; i++){
        printf("Em ordem crescente %d\n", i);
    }
    for (i=10; i >= 0; i--){
        printf("Em ordem decrescente %d\n", i);
    }

    int a;
    for (a = 36; a > 0 ; a/=2){
        printf("Divisao por 2 %d\n", a);
    }


    char ch;
    for (ch = 'a'; ch <= 'z'; ch++){
        printf("Letras do alfabeto %c\n", ch);
    }

    int j;
    for (i = 0, j = i; (i+j) <= 100; i++, j++){
        printf("Soma de i + j = %d\n", (i+j));
    }


    for (ch = getch(); ch != 'q'; ch = getch()){
        printf("Pressione q para sair do laco %c\n", ch);
    }

    return 0;
}
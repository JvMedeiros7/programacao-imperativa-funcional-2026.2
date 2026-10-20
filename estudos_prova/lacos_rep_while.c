#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    float soma = 0;
    const int numNotas = 4;
    int i = 0;

    while(i < numNotas){
        float nota;
        printf("Digite a nota %d: ", i + 1 );
        scanf("%f", &nota);
        i++;
        soma += nota;
    }

    printf("A media das notas é: %.2f\n", soma / numNotas);


    float nota2, soma2 = 0;
    int j = 0;

    do {
        printf("Digite a nota %d: ", j + 1 );
        scanf("%f", &nota2);
        j++;
        soma2 += nota2;
    } while(j < numNotas);

    printf("A media das notas é: %.2f\n", soma2 / numNotas);

    return 0;
}
#include <stdio.h>


//Operadores 

// Atribuição (=), aqui o sinal de igual representa a atribuição de um valor a uma variável. Por exemplo, a linha "int x = 5;" atribui o valor 5 à variável x.

// O dado armazenado deve ser compatível com o tipo da variável. Por exemplo, se a variável é do tipo int, você não pode atribuir um valor do tipo float a ela sem conversão.

int main(){

    // Declaração de uma variável inteira
    int x;
    x = 2000;
    printf("valor de x: %d\n", x); // X é igual a 2000

    int z, y;

    // Atribuição de valores a múltiplas variáveis
    z = y = 3; // Atribui 3 a x e z - São associadas da direita para a esquerda, ou seja, primeiro é atribuído 3 a y e depois o valor de y (que agora é 3) é atribuído a z.
    printf("valor de z: %d\n", z); // z é igual a 3
    printf("valor de y: %d\n", y); // y é igual a 3

    


    return 0;

}



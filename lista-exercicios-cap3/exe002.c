/*
 * Questao 02: Escopo de bloco e tempo de vida de variaveis.
 *
 * Versao original: 'soma' era declarada dentro do bloco do for. Fora dele ela nao
 * existe, por isso o printf final gerava erro de declaracao. Mesmo se o printf
 * estivesse dentro do bloco, 'soma' seria recriada e zerada a cada iteracao, e o
 * valor nunca acumularia.
 *
 * Correcao: declarar 'soma' antes do for, fora do bloco.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

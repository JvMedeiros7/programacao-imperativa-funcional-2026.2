#include <stdio.h>

int main() {
    int num_nasc, num_atual, idade;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &num_nasc);
    printf("Digite o ano atual: ");
    scanf("%d", &num_atual);
    idade = num_atual - num_nasc;
    printf("A idade da pessoa é: %d anos\n", idade);
    return 0;
}
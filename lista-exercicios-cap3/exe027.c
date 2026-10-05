/*
 * Questao 27: Simulador de caixa eletronico (decomposicao de cedulas).
 *
 * Le um valor inteiro positivo e calcula a menor quantidade de cedulas de
 * R$ 100, 50, 20, 10, 5 e 2, usando subtracoes sucessivas com while. Como as
 * cedulas sao sempre pagas da maior para a menor, o resultado e o minimo.
 * Valores impares ficam com resto 1 que nao pode ser pago com essas cedulas.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int valor;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque (R$ inteiro positivo): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Erro: o valor do saque deve ser positivo.\n");
        return 1;
    }

    while (valor >= 100) { valor -= 100; c100++; }
    while (valor >= 50)  { valor -= 50;  c50++;  }
    while (valor >= 20)  { valor -= 20;  c20++;  }
    while (valor >= 10)  { valor -= 10;  c10++;  }
    while (valor >= 5)   { valor -= 5;   c5++;   }
    while (valor >= 2)   { valor -= 2;   c2++;   }

    printf("\nCedulas entregues:\n");
    printf("R$ 100: %d\n", c100);
    printf("R$  50: %d\n", c50);
    printf("R$  20: %d\n", c20);
    printf("R$  10: %d\n", c10);
    printf("R$   5: %d\n", c5);
    printf("R$   2: %d\n", c2);

    if (valor > 0)
        printf("\nAtencao: sobrou R$ %d que nao pode ser pago com as cedulas disponiveis.\n", valor);

    return 0;
}

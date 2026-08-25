#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de utilidades
#ifdef _WIN32 
  #include <windows.h> // Inclui a biblioteca do Windows para manipulação de console
#endif

int main() {

    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Configura o console para usar a codificação UTF-8 no Windows
    #endif

    float lapis, borrachas, cadernos, canetas, fitas;

    printf("Digite o valor do lapis: ");
    scanf("%f", &lapis);
    printf("Digite o valor da borracha: ");
    scanf("%f", &borrachas);
    printf("Digite o valor do caderno: ");
    scanf("%f", &cadernos);
    printf("Digite o valor da caneta: ");
    scanf("%f", &canetas);
    printf("Digite o valor da fita: ");
    scanf("%f", &fitas);

    float total = lapis + borrachas + cadernos + canetas + fitas;
    printf("O valor total da compra é: \t %.2f\n", total); // Imprime o valor total da compra com duas casas decimais

    return 0;  
}
/*
 * Questao 21: Reajuste salarial por cargo.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float salario, aumento;
    int cargo;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Codigo do cargo (1 = Tecnico, 2 = Gerente, 3 = Demais): ");
    scanf("%d", &cargo);

    if (cargo == 1) {
        if (salario <= 3000)
            aumento = salario * 0.15;
        else
            aumento = salario * 0.10;
    } else if (cargo == 2) {
        if (salario <= 5000)
            aumento = salario * 0.10;
        else
            aumento = salario * 0.05;
    } else if (cargo == 3) {
        aumento = salario * 0.08;
    } else {
        printf("Código de cargo inválido!\n");
        return 1;
    }

    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", salario + aumento);

    return 0;
}

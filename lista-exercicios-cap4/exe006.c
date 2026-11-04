/*
 * Questao 06: Sequencia de ifs independentes versus cadeia else-if.
 *
 * a) Com idade = 65 sao impressos "Idoso", "Adulto" e "Jovem", porque os
 *    tres ifs sao independentes e todos testam condicoes verdadeiras.
 * b) Ifs independentes sao todos testados. Na cadeia else-if, ao achar a
 *    primeira condicao verdadeira, os demais testes sao ignorados.
 * c) Versao corrigida abaixo.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 60)
        printf("Idoso\n");
    else if (idade >= 18)
        printf("Adulto\n");
    else if (idade >= 12)
        printf("Jovem\n");
    else
        printf("Criança\n");

    return 0;
}

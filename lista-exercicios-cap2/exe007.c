/*
 * Questao 07: Leitura e Inversao Formatada de Datas.
 *
 * Le uma data digitada no formato dd/mm/aaaa (com as barras) e a exibe
 * invertida no formato aaaa/mm/dd, usando a string de controle do scanf()
 * para consumir as barras diretamente.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");

    /* Caracteres literais na string de controle ("/") devem aparecer na
       entrada exatamente nessa posicao; o scanf os consome e descarta,
       lendo apenas os tres inteiros. */
    scanf("%d/%d/%d", &dia, &mes, &ano);

    /* %02d garante dois digitos (com zero a esquerda) para dia e mes;
       %04d garante quatro digitos para o ano. */
    printf("Data invertida: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}

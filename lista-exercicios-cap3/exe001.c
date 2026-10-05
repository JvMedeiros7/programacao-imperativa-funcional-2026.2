/*
 * Questao 01: Diferenca entre while e do-while e o ponto-e-virgula em while (condicao);
 *
 * a) while testa a condicao ANTES de executar o bloco, entao pode executar 0 vezes.
 *    do-while executa o bloco PRIMEIRO e testa a condicao depois, entao executa
 *    no minimo 1 vez.
 * c) 'while (condicao);' compila, porque o ';' e uma instrucao vazia. E um erro de
 *    LOGICA: se condicao for verdadeira, o corpo vazio nao altera nada e a condicao
 *    e testada de novo indefinidamente (laco infinito), a menos que a propria
 *    condicao mude a cada teste (ex: while (getchar() != 'X');).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int condicao = 0;   /* falsa desde o inicio */
    int cont_while = 0;
    int cont_do = 0;

    while (condicao) {
        cont_while++;
    }

    do {
        cont_do++;
    } while (condicao);

    printf("while executou %d vez(es)\n", cont_while);
    printf("do-while executou %d vez(es)\n", cont_do);

    return 0;
}

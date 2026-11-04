/*
 * Questao 04: switch-case e fall-through.
 *
 * a) Saida com codigo = 2:
 *      Prata
 *      Ouro
 *    O case 2 imprime Prata e, como nao tem break, continua executando o case
 *    3, que imprime Ouro e entao encontra o break.
 * b) O break encerra o switch. Sem ele ocorre o fenomeno chamado
 *    fall-through (queda): a execucao continua nos cases seguintes.
 * c) O switch aceita expressao de tipo inteiro (int, short, long, char,
 *    enum). float e double NAO sao permitidos, porque numeros reais sao
 *    imprecisos e nao servem como rotulo de case (que precisa ser constante
 *    inteira).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int codigo = 2;

    switch (codigo) {
        case 1:
            printf("Bronze\n");
        case 2:
            printf("Prata\n");
        case 3:
            printf("Ouro\n");
            break;
        default:
            printf("Sem Medalha\n");
    }

    return 0;
}

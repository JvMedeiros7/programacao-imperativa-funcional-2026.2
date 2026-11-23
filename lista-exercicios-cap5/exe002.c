/*
 * Questao 02: O comando return e suas limitacoes.
 *
 * a) Uma funcao em C devolve UM unico valor via return. Em "return soma, media;"
 *    o operador virgula avalia soma, descarta, e devolve so media. O
 *    programador queria devolver os dois valores, mas isso nao e possivel.
 * b) "return;" encerra imediatamente a funcao void (sem valor). Nao e
 *    obrigatorio no final: a funcao termina sozinha ao chegar na chave final.
 * c) Sao necessarias duas funcoes (calculaMedia e calculaSoma), porque cada
 *    return devolve um unico valor.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int calculaMedia(int a, int b, int c);
int calculaSoma(int a, int b, int c);
void imprime_mensagem(int erro);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("Soma = %d\n", calculaSoma(4, 5, 6));
    printf("Media = %d\n", calculaMedia(4, 5, 6));
    imprime_mensagem(-1);
    imprime_mensagem(7);
    return 0;
}

int calculaMedia(int a, int b, int c) {
    return (a + b + c) / 3;
}

int calculaSoma(int a, int b, int c) {
    return a + b + c;
}

void imprime_mensagem(int erro) {
    if (erro < 0) {
        printf("Erro invalido\n");
        return;
    }
    printf("Codigo processado: %d\n", erro);
}

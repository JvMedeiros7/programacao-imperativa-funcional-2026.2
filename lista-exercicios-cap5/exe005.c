/*
 * Questao 05: #define, constantes e macros com argumentos.
 *
 * a) SQR(2+3)   -> ((2+3)*(2+3)) = 25
 *    DOBRO(2+3) -> 2+3*2 = 8 (sem parenteses, a macro e so substituicao de
 *    texto e a multiplicacao tem precedencia sobre a soma).
 * b) #define nao termina com ponto e virgula porque e diretiva do
 *    pre-processador, nao comando C (o ';' faria parte do texto substituido).
 *    Usa-se MAIUSCULAS por convencao, para distinguir constantes/macros de
 *    variaveis e funcoes.
 * c) "#define PRN (n) printf(...)" esta errado: o espaco apos PRN faz o
 *    pre-processador tratar "(n) printf(...)" como o texto da constante PRN.
 *    Correto: #define PRN(n) printf("%d", n)   (sem espaco antes do '(').
 *    Diferenca: macro e substituicao de texto antes da compilacao (sem tipos,
 *    sem chamada, pode avaliar argumento mais de uma vez); funcao e chamada em
 *    tempo de execucao, com verificacao de tipos.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2
#define PRN(n) printf("%d\n", n)

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("%d\n", SQR(2+3));
    printf("%d\n", DOBRO(2+3));
    PRN(SQR(4));
    return 0;
}

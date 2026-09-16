/*
 * Questao 01: Truncamento de Tipos e Coercao Implicita.
 *
 * O programa original atribui o literal double 2.97 a uma variavel int.
 * Este arquivo reproduz o comportamento e mostra como o programador pode
 * controlar a conversao explicitamente (cast, arredondamento ou uso de
 * uma variavel de ponto flutuante para manter a precisao).
 *
 * Resposta resumida:
 *  a) Sera exibido o valor 2.
 *  b) Ocorre uma conversao implicita (coercao) de double para int. Nessa
 *     conversao a parte fracionaria e descartada -> fenomeno chamado
 *     TRUNCAMENTO. Nao ha arredondamento: 2.97 vira 2.
 *  c) O programador pode: (1) declarar a variavel como float/double para
 *     manter a precisao; (2) usar um cast explicito (int) para deixar claro
 *     que o truncamento e intencional; (3) usar round() de <math.h> ou o
 *     truque "+ 0.5" antes do cast para arredondar em vez de truncar.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>   /* round() - compilar com -lm no Linux */
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    /* --- Situacao original: coercao implicita double -> int --- */
    int valor_inteiro;
    valor_inteiro = 2.97;               /* a parte fracionaria (.97) e descartada */
    printf("a) Valor armazenado (implícito): %d\n", valor_inteiro);

    /* --- Controle explicito pelo programador --- */

    /* 1) Manter a precisao: usar um tipo de ponto flutuante. */
    double valor_real = 2.97;
    printf("c1) Mantendo a precisão (double): %.2f\n", valor_real);

    /* 2) Cast explicito: mesmo resultado, mas a intencao fica documentada. */
    int truncado = (int) 2.97;
    printf("c2) Cast explícito (int) 2.97: %d\n", truncado);

    /* 3) Arredondar em vez de truncar. */
    int arredondado_math = (int) round(2.97);   /* round() de <math.h> */
    int arredondado_soma = (int) (2.97 + 0.5);  /* truque classico sem math.h */
    printf("c3) Arredondado com round(): %d\n", arredondado_math);
    printf("c3) Arredondado com +0.5:    %d\n", arredondado_soma);

    system("PAUSE");
    return 0;
}

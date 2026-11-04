/*
 * Questao 03: Operador ternario versus if-else.
 *
 * a) situacao = (media >= 7.0) ? 'A' : 'R'; testa a condicao: se for
 *    verdadeira o resultado e 'A', senao e 'R'. Com media = 6.8 a condicao e
 *    falsa, entao situacao recebe 'R'.
 * c) Nao substitui qualquer if-else: o ternario e uma EXPRESSAO que produz um
 *    valor, e cada lado aceita so uma expressao. Blocos com varios comandos
 *    (varios printf, lacos, etc.) precisam do if-else tradicional.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float nota1 = 6.0, nota2 = 7.6;
    float media;
    char situacao;

    media = (nota1 + nota2) / 2.0;
    situacao = (media >= 7.0) ? 'A' : 'R';
    printf("Ternario: media = %.1f, situacao = %c\n", media, situacao);

    /* Mesmo codigo com if-else */
    if (media >= 7.0) {
        situacao = 'A';
    } else {
        situacao = 'R';
    }
    printf("if-else:  media = %.1f, situacao = %c\n", media, situacao);

    return 0;
}

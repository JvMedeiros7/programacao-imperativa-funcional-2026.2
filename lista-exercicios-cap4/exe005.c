/*
 * Questao 05: Avaliacao de curto-circuito (&& e ||).
 *
 * a) Saida: a = 0, b = 5, c = 8. Como a != 0 e falso, o && ja sabe que o
 *    resultado e falso e NAO avalia ++b; b continua 5. Cai no else: c = 10-2.
 * b) &&: se o lado esquerdo for falso, o direito nao e avaliado (o resultado
 *    ja e falso). ||: se o lado esquerdo for verdadeiro, o direito nao e
 *    avaliado (o resultado ja e verdadeiro).
 * c) Com (a == 0 || ++b > 5): a == 0 e verdadeiro, entao ++b NAO executa.
 *    Entra no if: b = 5 e c = 20.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a = 0, b = 5, c = 10;

    if (a != 0 && ++b > 5)
        c += 10;
    else
        c -= 2;
    printf("a) a = %d, b = %d, c = %d\n", a, b, c);

    a = 0; b = 5; c = 10;
    if (a == 0 || ++b > 5)
        c += 10;
    else
        c -= 2;
    printf("c) a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}

/*
 * Questao 04: Avaliacao de Expressoes Logicas, Relacionais e Precedencia.
 *
 * i = 2, j = 3, k = 0, x = 2.5, y = 5.0
 *
 * a) i < j + 2                         -> 2 < 5                 -> 1 (V)
 * b) 2 * i - 5 <= j - 4                -> -1 <= -1               -> 1 (V)
 * c) !k && (x + y >= 7.5)              -> 1 && (7.5 >= 7.5)      -> 1 (V)
 * d) !(i == j) || (y / x == 2.0)       -> 1 || 1 (curto-circuito)-> 1 (V)
 * e) i == 2 && j == 4 || k == 0        -> (1 && 0) || 1          -> 1 (V)
 */

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int i = 2, j = 3, k = 0;
    float x = 2.5f, y = 5.0f;

    printf("a) i < j + 2                     => %d\n", i < j + 2);
    printf("b) 2 * i - 5 <= j - 4             => %d\n", 2 * i - 5 <= j - 4);
    printf("c) !k && (x + y >= 7.5)           => %d\n", !k && (x + y >= 7.5));
    printf("d) !(i == j) || (y / x == 2.0)    => %d\n", !(i == j) || (y / x == 2.0));
    printf("e) i == 2 && j == 4 || k == 0     => %d\n", i == 2 && j == 4 || k == 0);

    system("PAUSE");
    return 0;
}

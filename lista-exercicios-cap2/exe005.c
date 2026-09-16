/*
 * Questao 05: Avaliacao de Expressoes Logicas e Relacionais.
 *
 * Variaveis: int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y = 4.4;
 *
 * Precedencia usada (da maior para a menor):
 *   !  (unario)  >  * /  >  + -  >  < <= > >=  >  == !=  >  &&  >  ||
 *
 *  a) i < j + 3          -> 1 < 5                 -> 1
 *  b) 2*i - 7 <= j - 8   -> -5 <= -6              -> 0
 *  c) -x + y >= 2.0 * y  -> 1.1 >= 8.8            -> 0
 *  d) x == y             -> 3.3 == 4.4            -> 0
 *  e) !(n - j)           -> !(0)                  -> 1
 *  f) !n - j             -> (!2) - 2 = 0 - 2 = -2 -> valor -2, que e
 *                           VERDADEIRO em C (qualquer valor != 0)
 *  g) i && j && k        -> 1 && 1 && 1           -> 1
 *  h) i || j - 3 && k    -> i || ((j-3) && k) = 1 || (-1 && 3)
 *                           -> 1 (o || ja e verdadeiro pelo i; curto-circuito)
 *  i) i < j && 2 >= k    -> (1 < 2) && (2 >= 3) = 1 && 0 -> 0
 *  j) i == 2 || j == 4 || k == 5 -> 0 || 0 || 0   -> 0
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int i = 1, j = 2, k = 3, n = 2;
    float x = 3.3, y = 4.4;

    /* Operadores relacionais e logicos retornam int 1 (verdadeiro) ou 0 (falso). */
    printf("a) i < j + 3                  = %d\n", i < j + 3);
    printf("b) 2 * i - 7 <= j - 8         = %d\n", 2 * i - 7 <= j - 8);
    printf("c) -x + y >= 2.0 * y          = %d\n", -x + y >= 2.0 * y);
    printf("d) x == y                     = %d\n", x == y);
    printf("e) !(n - j)                   = %d\n", !(n - j));
    /* Em (f) o resultado e aritmetico (-2), nao 0/1: o ! aplica-se so ao n. */
    printf("f) !n - j                     = %d  (diferente de zero => verdadeiro)\n", !n - j);
    printf("g) i && j && k                = %d\n", i && j && k);
    /* O gcc avisa (-Wparentheses) sugerindo parenteses em (h); mantemos a
       expressao exatamente como no enunciado para observar que && tem
       precedencia sobre ||. */
    printf("h) i || j - 3 && k            = %d\n", i || j - 3 && k);
    printf("i) i < j && 2 >= k            = %d\n", i < j && 2 >= k);
    printf("j) i == 2 || j == 4 || k == 5 = %d\n", i == 2 || j == 4 || k == 5);

    return 0;
}

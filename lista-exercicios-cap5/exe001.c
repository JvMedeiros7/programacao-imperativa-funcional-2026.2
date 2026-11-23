/*
 * Questao 01: Anatomia de uma funcao e o papel do prototipo.
 *
 * a) Prototipo:  float celsius(float);              (antes da main)
 *    Chamada:    c = celsius(f);                    (dentro da main)
 *    Definicao:  float celsius(float fahr) { ... }  (depois da main)
 *    - Prototipo: avisa o compilador do nome, tipo de retorno e tipos dos
 *      parametros antes de a funcao ser usada.
 *    - Chamada: transfere o controle para a funcao, passando os argumentos, e
 *      recebe o valor retornado.
 *    - Definicao: contem o corpo (o codigo que realmente executa).
 * b) O prototipo permite ao compilador verificar a quantidade e o tipo dos
 *    argumentos em cada chamada. Sem ele (e com a funcao definida depois da
 *    main) o compilador nao conhece a funcao na chamada: em C antigo assume
 *    retorno int e nao confere parametros; em C moderno e erro/aviso.
 * c) O tipo da funcao celsius() e float, pois e o tipo do valor que ela
 *    devolve. O tipo e do retorno porque e ele que determina o tipo da
 *    expressao "celsius(f)" onde a chamada e usada (c = celsius(f)); os
 *    parametros apenas alimentam o calculo.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

float celsius(float);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float c, f = 100.0;
    c = celsius(f);
    printf("Celsius = %.2f\n", c);
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}

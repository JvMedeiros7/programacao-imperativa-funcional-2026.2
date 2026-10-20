/*
 * Questao 06: Escopo de Bloco e Comandos de Desvio (break e continue).
 *
 * Codigo original:
 *   for (i = 1; i <= 10; i++) {
 *       if (i == 5) continue;
 *       if (i == 8) break;
 *       int soma = 0;
 *       soma += i * i;
 *   }
 *   printf("Soma final = %d\n", soma);   <- erro
 *
 * a) 'soma' e declarada DENTRO das chaves { } do corpo do for, portanto seu
 *    ESCOPO termina na chave de fechamento desse bloco. Fora do laco (no
 *    printf final) o identificador 'soma' nao existe mais, gerando erro de
 *    compilacao ("'soma' undeclared").
 *
 * b) Iteracoes efetivamente executadas: i = 1, 2, 3, 4, 6, 7.
 *    - i = 5: o 'continue' pula o restante do corpo (nao executa a linha
 *      "int soma = 0; soma += i*i;" para i = 5) e vai direto para i++.
 *    - i = 8: o 'break' interrompe o laco IMEDIATAMENTE, antes de executar
 *      o corpo para i = 8; o laco termina neste ponto (i = 9, 10 nunca
 *      acontecem).
 *    - Alem disso, mesmo nas iteracoes em que o corpo roda, 'soma' e
 *      recriada e reiniciada em 0 a cada passagem pelo laco (pois a
 *      declaracao "int soma = 0;" esta dentro do bloco repetido), entao o
 *      valor acumulado de uma iteracao nunca sobrevive para a proxima.
 *
 * c) Correcao: declarar 'soma' ANTES do for (fora do bloco), para que ela
 *    exista durante toda a funcao e acumule entre as iteracoes.
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

    int i;
    int soma = 0;   /* declarada fora do for: escopo valido ate o fim de main */

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);  /* 1+4+9+16+36+49 = 115 */

    system("PAUSE");
    return 0;
}

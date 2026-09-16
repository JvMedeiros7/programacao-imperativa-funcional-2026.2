/*
 * Questao 22: Conversao de Caixa Alta para Baixa via Tabela ASCII.
 *
 * Le uma letra MAIUSCULA e a converte em minuscula usando apenas aritmetica
 * sobre os codigos ASCII, sem <ctype.h>.
 *
 * Na tabela ASCII as maiusculas vao de 'A' (65) a 'Z' (90) e as minusculas
 * de 'a' (97) a 'z' (122). A distancia entre cada par e sempre 32.
 * Logo:  minuscula = maiuscula + 32
 *   ou:  minuscula = maiuscula - 'A' + 'a'   (mesma coisa: 'a' - 'A' = 32)
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    char maiuscula;

    printf("Digite uma letra maiúscula: ");
    scanf(" %c", &maiuscula);

    /* Forma 1: offset fixo de 32 posicoes. */
    char minuscula_offset = maiuscula + 32;

    /* Forma 2: "posicao da letra no alfabeto" (maiuscula - 'A') somada ao
       inicio do alfabeto minusculo ('a'). Mais legivel e nao depende de
       lembrar o numero 32. */
    char minuscula_alfabeto = maiuscula - 'A' + 'a';

    printf("Maiúscula: %c (ASCII %d)\n", maiuscula, maiuscula);
    printf("Minúscula (offset +32):        %c (ASCII %d)\n", minuscula_offset, minuscula_offset);
    printf("Minúscula (- 'A' + 'a'):       %c (ASCII %d)\n", minuscula_alfabeto, minuscula_alfabeto);

    return 0;
}

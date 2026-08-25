/*
 * Questao 21: Produzir a saida de texto abaixo em tres versoes independentes:
 *
 *     Treinamento em programacao.
 *     Linguagem C.
 *
 * Versao 1: uma unica chamada de printf().
 * Versao 2: exatamente duas instrucoes de impressao independentes.
 * Versao 3: as frases emolduradas com caracteres graficos de caixa.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

/* Versao 1 - um unico printf() usando \n para separar as duas frases. */
void versao1(void) {
    printf("Treinamento em programacao.\nLinguagem C.\n");
}

/* Versao 2 - exatamente duas chamadas de printf() independentes. */
void versao2(void) {
    printf("Treinamento em programacao.\n");
    printf("Linguagem C.\n");
}

/* Versao 3 - frases emolduradas com caracteres de caixa (box drawing).
 * A largura interna da moldura acompanha a frase mais longa (27 colunas
 * de texto + 1 espaco de folga em cada lado = 29 colunas). */
void versao3(void) {
    const int larguraInterna = 29;
    int i;

    /* Linha superior da moldura: cantoSupEsq + linha horizontal + cantoSupDir */
    printf("╔");
    for (i = 0; i < larguraInterna; i++) printf("═");
    printf("╗\n");

    /* Linha 1: "Treinamento em programacao." tem 27 colunas de texto. */
    printf("║ Treinamento em programacao. ║\n");

    /* Linha 2: "Linguagem C." tem 12 colunas; completamos com espacos. */
    printf("║ Linguagem C.                ║\n");

    /* Linha inferior da moldura. */
    printf("╚");
    for (i = 0; i < larguraInterna; i++) printf("═");
    printf("╝\n");
}

int main(void) {
#ifdef _WIN32
    /* UTF-8 permite exibir tanto acentos quanto os caracteres Unicode de caixa. */
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("=== Versao 1 (um unico printf) ===\n");
    versao1();

    printf("\n=== Versao 2 (dois printf independentes) ===\n");
    versao2();

    printf("\n=== Versao 3 (frases emolduradas) ===\n");
    versao3();

    return 0;
}

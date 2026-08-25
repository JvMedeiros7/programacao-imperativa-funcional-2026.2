/*
 * Questao 24: Organizar dados de notas escolares em uma tabela alinhada no
 * console, usando espacadores de campo. A coluna NOTA aceita valores
 * numericos (9.0, 4.5, 7.0) e tambem texto ("DEZ"), por isso e tratada como
 * string. O nome do(a) aluno(a) ocupa uma coluna de 9 colunas de largura.
 *
 *     ALUNO(A) NOTA
 *     ========= =====
 *     ALINE     9.0
 *     MARIO     DEZ
 *     SERGIO    4.5
 *     SHIRLEY   7.0
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    /* Cabecalho e separador (largura de 9 para o nome + coluna da nota). */
    printf("ALUNO(A)  NOTA\n");
    printf("========= =====\n");

    /* Cada nome e alinhado a esquerda em um campo de 9 caracteres.
       Os acentos (MARIO -> MÁRIO, SERGIO -> SÉRGIO) sao letras unicas na
       exibicao, portanto o espacamento manual mantem as colunas alinhadas. */
    printf("ALINE     9.0\n");
    printf("MÁRIO     DEZ\n");
    printf("SÉRGIO    4.5\n");
    printf("SHIRLEY   7.0\n");

    return 0;
}

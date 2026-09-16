/*
 * Questao 02: Entrada Standard de Caracteres vs. Bibliotecas Legadas.
 *
 *  a) <conio.h> nao faz parte do padrao ANSI/ISO C. Ela e uma biblioteca
 *     especifica de compiladores antigos para DOS/Windows (Turbo C, Borland,
 *     alguns MinGW). Em Linux, macOS e servidores o cabecalho simplesmente
 *     nao existe, entao o codigo nao compila -> perda total de portabilidade.
 *  b) Equivalentes portaveis em <stdio.h>: getchar() para ler um caractere
 *     e putchar() para escrever um caractere. Tambem servem scanf("%c") e
 *     printf("%c"). Diferenca: sao "buffered", ou seja, exigem [ENTER].
 *  c) O trecho abaixo le um caractere de forma robusta, descartando '\n'
 *     residuais que ficaram no buffer de teclado apos leituras anteriores.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int numero;
    int c;   /* getchar() retorna int para poder representar EOF */

    /* Uma leitura numerica anterior deixa o '\n' do ENTER no buffer... */
    printf("Digite um número qualquer: ");
    scanf("%d", &numero);

    /* ... por isso, ao ler o caractere, ignoramos quebras de linha residuais. */
    printf("Digite um caractere: ");
    do {
        c = getchar();
    } while (c == '\n');   /* repete enquanto o que foi lido for apenas o ENTER */

    /* Alternativa equivalente com scanf: o espaco antes de %c faz o scanf
       pular qualquer espaco em branco (incluindo '\n') antes de ler.
       char ch; scanf(" %c", &ch);                                       */

    printf("Você digitou o número %d e o caractere '", numero);
    putchar(c);                      /* saida portavel de um caractere */
    printf("'\n");

    return 0;
}

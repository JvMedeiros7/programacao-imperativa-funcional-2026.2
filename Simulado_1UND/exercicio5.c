/*
 * Questao 05: Estruturas de Repeticao - Comparacao entre for, while e do-while.
 *
 * a) No while o teste da condicao ocorre ANTES de cada execucao do bloco,
 *    entao o bloco pode executar ZERO vezes (se a condicao ja comecar falsa).
 *    No do-while o teste ocorre DEPOIS do bloco, entao o bloco sempre
 *    executa PELO MENOS UMA vez, mesmo que a condicao seja falsa de inicio.
 *
 * b) O for e mais elegante quando se conhece de antemao o numero de
 *    repeticoes (ou quando ha um contador claro), pois reune em um so lugar
 *    a inicializacao, a condicao de parada e o incremento/decremento,
 *    deixando o cabecalho do laco auto-explicativo. O while e preferido
 *    quando a condicao de parada depende de um evento nao previsivel
 *    (ex.: ler ate o usuario digitar um valor especial).
 *
 * c) 'while (condicao);' NAO e erro de compilacao: o ';' logo apos o
 *    cabecalho e interpretado como um comando vazio (um bloco vazio), que e
 *    sintaticamente valido. E um erro de LOGICA: se condicao for verdadeira
 *    e nunca deixar de ser (nada dentro do "laco vazio" pode altera-la), o
 *    programa entra em LACO INFINITO, pois o compilador repete
 *    indefinidamente a instrucao vazia sem nunca executar o bloco { ... }
 *    que o programador escreveu logo em seguida (esse bloco passa a ser
 *    executado apenas uma vez, depois do laco, e nao faz mais parte dele).
 *
 * Demonstracao pratica das diferencas entre while e do-while abaixo.
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

    printf("--- while com condicao já falsa de inicio ---\n");
    int contador = 10;
    while (contador < 5) {
        printf("Este bloco nunca sera impresso.\n");
        contador++;
    }
    printf("O laco while nao executou nenhuma vez (contador = %d).\n\n", contador);

    printf("--- do-while com a MESMA condicao já falsa de inicio ---\n");
    contador = 10;
    do {
        printf("Este bloco executa pelo menos uma vez (contador = %d).\n", contador);
        contador++;
    } while (contador < 5);
    printf("O laco do-while executou 1 vez antes de checar a condicao.\n\n");

    printf("--- exemplo do erro de logica 'while (condicao);' ---\n");
    printf("(apenas demonstrado em comentario, para nao travar o programa)\n");
    /*
     * int x = 1;
     * while (x == 1);          // ';' = comando vazio -> laco infinito,
     * {                        // este bloco so roda DEPOIS do laco acabar
     *     printf("Nunca chega aqui enquanto x == 1.\n");
     * }
     */

    system("PAUSE");
    return 0;
}

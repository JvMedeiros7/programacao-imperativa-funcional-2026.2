/*
 * Questao 03: Funcoes void, parametros e assinaturas.
 *
 * a) void exibe_mensagem(char* msg): tem parametro (char*), sem retorno.
 *    int obter_codigo(void):         sem parametros, retorna int.
 *    void limpar_tela(void):         sem parametros e sem retorno.
 * b) Funcao com retorno calcula/devolve um valor para quem chamou (ex.:
 *    calcular uma media). Procedimento (void) apenas executa uma acao, sem
 *    devolver nada (ex.: imprimir um menu).
 * c) "x = limpar_tela();" NAO e valida: a funcao e void, nao ha valor para
 *    atribuir a x (erro de compilacao).
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

void exibe_mensagem(char* msg);
int obter_codigo(void);
void limpar_tela(void);

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int x;
    exibe_mensagem("Ola, funcoes!");
    x = obter_codigo();
    printf("Codigo = %d\n", x);
    limpar_tela();
    /* x = limpar_tela();  <- erro de compilacao: funcao void */
    return 0;
}

void exibe_mensagem(char* msg) {
    printf("%s\n", msg);
}

int obter_codigo(void) {
    return 42;
}

void limpar_tela(void) {
    printf("(tela limpa)\n");
}

/*
 * Questao 07: Contagem progressiva de 0 a 100 em tres versoes (for, while, do-while).
 *
 * Cada versao esta em uma funcao propria, no mesmo arquivo.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

void contagem_for(void) {
    int i;
    printf("Versao for:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

void contagem_while(void) {
    int i = 0;
    printf("Versao while:\n");
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

void contagem_do_while(void) {
    int i = 0;
    printf("Versao do-while:\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    contagem_for();
    contagem_while();
    contagem_do_while();

    /*
     * Resposta: a estrutura mais adequada e o for. O numero de repeticoes e
     * conhecido de antemao (0 a 100) e o for reune inicializacao, teste e
     * incremento no proprio cabecalho, o que deixa o controle do laco claro.
     * while e do-while funcionariam, mas exigiriam o contador e o incremento
     * espalhados pelo codigo. O do-while so se justificaria se fosse preciso
     * executar pelo menos uma vez antes do teste.
     */

    return 0;
}

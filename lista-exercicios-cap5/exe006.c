/*
 * Questao 06: #include, #undef e compilacao condicional.
 *
 * a) #include <stdio.h>: procura nos diretorios padrao do compilador
 *    (bibliotecas do sistema). #include "areas.h": procura primeiro na pasta
 *    do projeto (arquivos proprios).
 * b) #undef SOMA remove a definicao da macro, que deixa de existir dali em
 *    diante. "#undef SOMA(x,y)" esta incorreto: #undef recebe so o NOME.
 * c) Se DEBUG nao foi definido, imprime "Modo normal". A decisao e tomada no
 *    PRE-PROCESSAMENTO (antes da compilacao), entao o trecho do #ifdef nao
 *    escolhido nem chega ao executavel. As diretivas sao consumidas pelo
 *    pre-processador, por isso nao aparecem no executavel final.
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define SOMA(x,y) ((x)+(y))

int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("SOMA(2,3) = %d\n", SOMA(2, 3));
#undef SOMA
    /* a partir daqui SOMA nao existe mais */

#ifdef DEBUG
    printf("Modo de depuracao\n");
#else
    printf("Modo normal\n");
#endif
    return 0;
}

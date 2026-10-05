/*
 * Questao 02: Especificadores de Formato, Sequencias de Escape e Erros de
 * Compilacao.
 *
 * Codigo original (nao compila em C):
 *
 *   #include <stdio.h>
 *   #include <stdlib.h>;        <- erro 1
 *   int Main()                  <- erro 2
 *   {
 *       int idade = 20;
 *       printf( A idade do aluno eh: %d anos.. , idade);
 *       cout << endl;           <- erro 3
 *       system("PAUSE");
 *       return 0;
 *   }
 *
 * Os tres erros sintaticos/estruturais:
 *  1) "#include <stdlib.h>;" - ponto-e-virgula sobrando apos uma diretiva de
 *     pre-processador. Diretivas #include nao terminam com ';'; esse ';'
 *     sobra como uma instrucao solta fora de qualquer funcao, o que e
 *     invalido em C.
 *  2) "int Main()" - C diferencia maiusculas de minusculas; o ponto de
 *     entrada reconhecido pelo compilador/linker e "main", nunca "Main".
 *  3) "cout << endl;" - cout/endl sao da biblioteca <iostream> do C++
 *     (namespace std). Em C puro essa sintaxe nao existe; o equivalente
 *     para pular linha e usar '\n' dentro do proprio printf ou chamar
 *     printf("\n").
 *
 * Abaixo, a versao corrigida e funcional.
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

    int idade = 20;
    printf("A idade do aluno eh: %d anos.\n", idade);

    system("PAUSE");
    return 0;
}

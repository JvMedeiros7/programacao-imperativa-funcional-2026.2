/*
 * Questao 01: Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C.
 *
 * Resposta: alternativa (c).
 * A linguagem C diferencia letras maiusculas de minusculas na formacao de
 * identificadores. Logo 'numero'/'Numero', 'valor'/'VALOR', 'peso'/'Peso' e
 * 'taxa'/'TAXA' sao pares de identificadores TOTALMENTE DISTINTOS para o
 * compilador, podendo inclusive coexistir no mesmo escopo como variaveis
 * independentes, cada uma com seu proprio endereco de memoria.
 *
 * (a) esta errada: 'numero' e 'Numero' NAO compartilham endereco.
 * (b) esta errada: a palavra-chave de entrada é "main" (minusculo); "Main"
 *     nao e reconhecida pelo compilador/linker como ponto de entrada.
 * (d) esta errada: a sensibilidade a caixa e uma regra da linguagem C em si,
 *     nao depende do sistema operacional.
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

    int valor = 10;
    int VALOR = 20;

    int peso = 70;
    int Peso = 75;

    printf("valor = %d | VALOR = %d -> identificadores distintos\n", valor, VALOR);
    printf("peso  = %d | Peso  = %d -> identificadores distintos\n", peso, Peso);
    printf("Endereco de 'valor': %p\n", (void *) &valor);
    printf("Endereco de 'VALOR': %p\n", (void *) &VALOR);
    printf("\nAlternativa correta: (c)\n");

    system("PAUSE");
    return 0;
}

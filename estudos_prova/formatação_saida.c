#include <stdio.h>
#include <stdlib.h>

/* Sequencias de escape: comecam com barra invertida ( \ ) e representam
   um caractere que nao da para digitar direto dentro da string. */

int main() {

    printf("--- CONTROLE DO CURSOR ---\n\n");

    /* \n = nova linha */
    printf("Linha 1 \n");
    printf("Linha 2 \n\n");

    /* \t = tabulacao horizontal (alinha em colunas) */
    printf("Nome \t Idade \n");
    printf("Ana \t 23 \n");
    printf("Joao \t 31 \n\n");

    /* \b = backspace, apaga um caractere para tras */
    printf("ABCXY\b\b--\n");
    printf("(os dois \\b apagaram o XY)\n\n");

    /* \r = retorno de carro, volta pro inicio da MESMA linha */
    printf("123456789\rABC\n");
    printf("(ABC escreveu por cima do 123)\n\n");

    /* \a = alerta, so emite um beep e nao mostra nada */
    printf("Aqui tem um beep ->\a\n\n");

    printf("--- CARACTERES ESPECIAIS ---\n\n");

    /* \" = aspas duplas (sem a barra a string terminaria aqui) */
    printf("Ele disse \"bom dia\"\n");

    /* \' = aspas simples */
    printf("Aspas simples: \'\n");

    /* \\ = uma barra invertida (escreve duas para sair uma) */
    printf("Caminho: C:\\Users\\aluno\n");

    /* %% = nao e escape, e coisa do printf: dobra o % para imprimir % */
    printf("Desconto de 50%%\n\n");

    printf("--- CODIGOS DA TABELA ASCII ---\n\n");

    /* \x41 = hexadecimal. 0x41 = 65 = letra A */
    printf("\\x41 em hexadecimal da: \x41 \n");

    /* \101 = octal. 101 na base 8 = 65 = letra A */
    printf("\\101 em octal da: \101 \n");

    /* CUIDADO: nao existe escape DECIMAL em C.
       \65 e lido como OCTAL: 6*8 + 5 = 53, que e o caractere '5' */
    printf("\\65 NAO e decimal, da: \65 \n");
    printf("Para o codigo 65 mesmo, passe o numero pro %%c: %c \n\n", 65);

    /* \0 = caractere nulo, marca o fim de toda string em C */
    printf("[AB\0CD]");
    printf("\n(o CD sumiu: a string terminou no \\0)\n");

    system("pause");

    return 0;
}

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif
#include <conio.h> // Biblioteca para funções getch() e getche()


//Operadores 

int main(){
    
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    // Declaração de uma variável inteira
    int x;

    // Atribuição (=), aqui o sinal de igual representa a atribuição de um valor a uma variável. Por exemplo, a linha "int x = 5;" atribui o valor 5 à variável x.

    // O dado armazenado deve ser compatível com o tipo da variável. Por exemplo, se a variável é do tipo int, você não pode atribuir um valor do tipo float a ela sem conversão.
    x = 2000;
    printf("valor de x: %d\n", x); // X é igual a 2000

    int z, y;

    // Atribuição de valores a múltiplas variáveis
    z = y = 3; // Atribui 3 a x e z - São associadas da direita para a esquerda, ou seja, primeiro é atribuído 3 a y e depois o valor de y (que agora é 3) é atribuído a z.
    printf("valor de z: %d\n", z); // z é igual a 3
    printf("valor de y: %d\n", y); // y é igual a 3


    //Operadores Aritméticos (+, -, *, /, %), são usados para realizar operações matemáticas básicas. Por exemplo, a expressão "a + b" soma os valores de a e b.

    int a = 10, b = 5;

    printf("Soma: %d\n", a + b); // Soma: 15
    printf("Subtração: %d\n", a - b); // Subtração
    printf("Multiplicação: %d\n", a * b); // Multiplicação
    printf("Divisão: %d\n", a / b); // Divisão
    printf("Módulo: %d\n", a % b); // Módulo - é o resto da divisão de a por b, que neste caso é 0, pois 10 é divisível por 5.

    int inverso = -a; // Operador unário de negação, inverte o sinal do valor de a.
    printf("Inverso de a: %d\n", inverso); // Inverso de a: -10

    // Precedência de operadores: A ordem em que os operadores são avaliados em uma expressão. Por exemplo, na expressão "a + b * c", a multiplicação é realizada antes da adição devido à precedência dos operadores.

    // Ordem de precedência dos operadores em C é a seguinte (do mais alto para o mais baixo):
    // 1. Parênteses ()
    // 2. Operadores unários (+, -, !, ++, --)
    // 3. Multiplicação (*), Divisão (/), Módulo (%)
    // 4. Adição (+), Subtração (-)
    // 5. Operadores de comparação (==, !=, <, >, <=, >=)
    // 6. Operadores lógicos (&&, ||)
    // 7. Operadores de atribuição (=, +=, -=, *=, /=, %=)
    // 8. Vírgula (,)

    int c = 2;

    int resultado = a + b * c; // A multiplicação é realizada primeiro, então o resultado é 10 + (5 * 2) = 20
    printf("Resultado da expressão a + b * c: %d\n", resultado); // Resultado da expressão a + b * c: 20

    // Para alterar a ordem de avaliação, podemos usar parênteses:
    resultado = (a + b) * c; // Agora a adição é realizada primeiro, então o resultado é (10 + 5) * 2 = 30
    printf("Resultado da expressão (a + b) * c: %d\n", resultado); // Resultado da expressão (a + b) * c: 30


    // Operador de endereço (&): Retorna o endereço de memória de uma variável. Por exemplo, "&x" retorna o endereço de memória da variável x.
    printf("Endereço de memória de x: %p\n", (void*)&x); // Endereço de memória de x
    printf("Endereço de memoria de a = %p\n", (void*)&a); // Endereço de memória de a

    // exemplo de uso do operador de endereço (&) para obter o endereço de memória de uma variável e exibi-lo no console. O operador & é usado para obter o endereço de memória da variável n, que é então convertido para um ponteiro void* para ser exibido corretamente com o especificador de formato %p.
    int n = 2;
    printf("Valor = %d\n", n); // Valor = 2
    printf("Endereço de memória de n = %p\n", (void*)&n); // Endereço de memória de n



    // Função - Scanf 

    int input;

    printf("Digite um número inteiro: ");
    scanf("%d", &input); // O operador & é usado para passar o endereço de memória da variável input para a função scanf, permitindo que ela armazene o valor digitado pelo usuário na variável input.
    printf("Você digitou: %d\n", input); // Exibe o valor digitado pelo usuário

    int a1, b1, c1;

    printf("Digite o valor de a1: ");
    scanf("%d", &a1); // Lê um valor inteiro e armazena em a1
    printf("Digite o valor de b1: ");
    scanf("%d", &b1); // Lê um valor inteiro e armazena em b1
    printf("Digite o valor de c1: ");
    scanf("%d", &c1); // Lê um valor inteiro e armazena em c1
                                      // O operador & é obrigatório e usado para passar o endereço de memória das variáveis a1, b1 e c1 para a função scanf, permitindo que ela armazene os valores digitados pelo usuário nessas variáveis.  

    printf("Valores digitados: a1 = %d, b1 = %d, c1 = %d\n", a1, b1, c1); // Exibe os valores digitados pelo usuário

    // Códigos de formatação 

    // %d - inteiro
    // %f - ponto flutuante
    // %c - caractere
    // %s - string
    // %ld - inteiro longo
    // %lf - ponto flutuante de precisão dupla
    // %p - ponteiro (endereço de memória)
    // %u - inteiro sem sinal
    // %x - inteiro em hexadecimal

    // Exemplo de uso de códigos de formatação:

    float ctemp, ftemp;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &ctemp); // Lê um valor de ponto flutuante e armazena em ctemp
    ftemp = (ctemp * 9 / 5) + 32; //
    // Converte a temperatura de Celsius para Fahrenheit usando a fórmula F = (C * 9/5) + 32
    printf("%.2f Celsius = %.2f Fahrenheit\n", ctemp, ftemp);


    // Constante e scanf

    // A palavra-chave const é usada para declarar uma variável como constante, ou seja, seu valor não pode ser alterado após a inicialização. Por exemplo, "const int x = 5;" declara uma constante inteira x com valor 5.

    const double Pi = 3.14159; // Declaração de uma constante Pi com valor 3.14159
    double raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio); // Lê um valor de ponto flutuante e armazena em raio

    area = Pi * raio * raio; // Calcula a área do círculo usando a fórmula A = πr²
    printf("Área do círculo com raio %.2f é %.2f\n", raio, area); // Exibe a área calculada do círculo

    // Conversão de tipos (type casting) - é o processo de converter um valor de um tipo de dado para outro. Por exemplo, podemos converter um inteiro para um ponto flutuante usando (float) ou (double).

    int inteiro = 10;

    float pontoFlutuante = (float)inteiro; // Converte o inteiro para ponto flutuante
    printf("Valor inteiro: %d, Valor ponto flutuante: %.2f\n", inteiro, pontoFlutuante); // Exibe o valor inteiro e o valor convertido para ponto flutuante

    // Quando operandos de tipos diferentes estão em uma expressão, o tipo de menor tamanho em bytes é convertido para o de maior tamanho


    //Funções getche() e getch() - são funções usadas para ler um único caractere do teclado sem a necessidade de pressionar Enter. A função getche() exibe o caractere digitado na tela, enquanto getch() não exibe.

    char caractere;
    printf("Pressione uma tecla: ");
    char tecla = getche(); // Lê um caractere do teclado e o exibe na tela
    printf("\nVocê pressionou: %c\n", tecla); // Exibe o caractere digitado pelo usuário

    printf("Sucessora ASCII do caractere digitado: %d\n", tecla + 1); // Exibe o valor ASCII do caractere digitado incrementado em 1


    // Função getchar() - é usada para ler um único caractere do teclado, mas ao contrário de getch() e getche(), ela requer que o usuário pressione Enter após digitar o caractere.

    printf("Pressione uma tecla e depois Enter: ");
    char tecla2 = getchar(); // Lê um caractere do teclado após o usuário pressionar Enter
    printf("Você pressionou: %c\n", tecla2); // Exibe o caractere digitado pelo usuário1


    // Função putchar() - é usada para exibir um único caractere na tela. Por exemplo, "putchar('A');" exibirá o caractere 'A' no console.
    putchar(tecla2); // Exibe o caractere digitado pelo usuário usando putchar()

    // Operadores de incremento (++) e decremento (--) - são usados para aumentar ou diminuir o valor de uma variável em 1. Por exemplo, "x++" incrementa o valor de x em 1, enquanto "x--" decrementa o valor de x em 1.

    int x = 2;

    // Exemplos de incremento:

    x = x + 1; // Incrementa x em 1, agora x é 6
    x++;       // Incrementa x em 1, agora x é 7
    --x;       // Decrementa x em 1, agora x é 6

    printf("Valor final de x: %d\n", x);


    int n = 5;
    int y;
    y = n++; // Pós incremento ++ // y recebe o valor de n (5) e depois n é incrementado para 6
    printf("Valor de y: %d, Valor de n: %d\n", y, n); // Exibe y = 5 e n = 6

    int n2 = 10;
    int y2;
    y2 = ++n2; // Pré incremento ++ // n2 é incrementado para 11 e depois y2 recebe o valor de n2 (11)
    printf("Valor de y2: %d, Valor de n2: %d\n", y2, n2); // Exibe y2 = 11 e n2 = 11


    // Operadores de Atribuição Composta (+=, -=, *=, /=, %=) - são usados para combinar uma operação aritmética com uma atribuição. Por exemplo, "x += 5;" é equivalente a "x = x + 5;".

    int i = 1;
    // Sintaxe e Equivalência

    i += 5; // Equivalente a i = i + 5; // i agora é 6
    printf("Valor de i: %d\n", i); // Exibe i = 6

    i -= 2; // Equivalente a i = i - 2; // i agora é 4
    printf("Valor de i: %d\n", i); // Exibe i = 4

    i /= 2; // Equivalente a i = i / 2; // i agora é 2
    printf("Valor de i: %d\n", i); // Exibe i = 2 

    i *= 3; // Equivalente a i = i * 3; // i agora é 6
    printf("Valor de i: %d\n", i); // Exibe i = 6

    i %= 4; // Equivalente a i = i % 4; // i agora é 2
    printf("Valor de i: %d\n", i); // Exibe i = 2

    // Operadores Relacionais (==, !=, <, >, <=, >=) - são usados para comparar dois valores. Eles retornam 1 (verdadeiro) se a comparação for verdadeira e 0 (falso) se for falsa. Por exemplo, "x == y" verifica se x é igual a y.

    int verdadeiro = (15 < 20); // Verdadeiro, pois 15 é menor que 20
    int falso = (15 > 20); // Falso, pois 15 não é maior que 20

    printf("Resultado da comparação 15 < 20: %d\n", verdadeiro); // Exibe 1 (verdadeiro)
    printf("Resultado da comparação 15 > 20: %d\n", falso); // Exibe 0 (falso)
    
    // Operadores Lógicos (&&, ||, !) - são usados para combinar expressões booleanas. 

    // O operador && (E lógico) retorna verdadeiro se ambas as expressões forem verdadeiras. 
    //O operador || (OU lógico) retorna verdadeiro se pelo menos uma das expressões for verdadeira. 
    //O operador ! (NÃO lógico) inverte o valor de uma expressão booleana.

    int a = 1; // Verdadeiro
    int b = 0; // Falso

    int c = (a && b); // Falso, pois a é verdadeiro e b é falso
    int d = (a || b); // Verdadeiro, pois a é verdadeiro
    int e = !a; // Falso, pois a é verdadeiro

    printf("Resultado de a && b: %d\n", c); // Exibe 0 (falso)
    printf("Resultado de a || b: %d\n", d); // Exibe 1 (verdadeiro)
    printf("Resultado de !a: %d\n", e); // Exibe 0 (falso)

    return 0;

}



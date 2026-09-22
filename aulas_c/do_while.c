#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif
#include <conio.h> // Biblioteca para funções getch() e getche()


//Laços de Repetição (Loops) - são estruturas de controle que permitem executar um bloco de código repetidamente enquanto uma condição for verdadeira. Em C, os principais tipos de loops são: for, while e do-while.

int main(){
    
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    printf("Hello, World!\n");

    int qtdNotas;
    float nota, soma = 0.0;
    char ch = 's';

    // Exemplo de loop while para calcular a média de notas
    // While a condição tem que ser verdadeira para que o bloco de código seja executado. Se a condição for falsa, o loop não será executado.

    while(ch == 's' || ch == 'S'){
        system("cls"); // Limpa a tela antes de cada nova entrada de notas
        float media = 0.0; // Resetando a média para cada nova entrada de notas
        printf("Digite a quantidade de notas: ");
        scanf("%d", &qtdNotas);

        for(int i = 0; i < qtdNotas; i++){
            printf("Digite a nota %d: ", i + 1);
            scanf("%f", &nota);
            media += nota;
        }

        printf("A média das notas é: %.2f\n", media / qtdNotas);
        
        // Exemplo de loop do-while para perguntar ao usuário se deseja calcular a média de mais notas
        // Garante que o bloco de código seja executado pelo menos uma vez, mesmo que a condição seja falsa na primeira verificação.

        do{
            printf("Deseja calcular a média de mais notas? (s/n): ");
            ch = getch(); // Captura o caractere sem precisar pressionar Enter
            printf("%c\n", ch); // Exibe o caractere digitado
        } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N'); // Valida a entrada do usuário
 
    }
    
    system("pause");
    return 0;
}
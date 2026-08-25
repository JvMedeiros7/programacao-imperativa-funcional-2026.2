#include <stdio.h>
#ifdef _WIN32
  #include <windows.h>
#endif

int main() {

    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    #endif

    float num_euler;

    num_euler = 2.71828182845904523536; // Valor aproximado de Euler
    printf("O valor aproximado de Euler é: %.5f\n", num_euler); 

    return 0;  
}
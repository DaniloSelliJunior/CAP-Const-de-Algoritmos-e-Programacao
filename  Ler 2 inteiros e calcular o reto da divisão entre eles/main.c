/******************************************************************************
Descrição: Ler 2 inteiros e calcular o reto da divisão entre eles
Requer: 2 inteiros
Assegura: apresentação

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada[160];
    printf("Digite o primeiro valor: \n");
    fgets(entrada, sizeof entrada - 1, stdin);
    int valor1;
    sscanf(entrada, "%d", &valor1);
    
    printf("Digite o segundo valor: \n");
    fgets(entrada, sizeof entrada - 1, stdin);
    int valor2;
    sscanf(entrada, "%d", &valor2);
    
    int resto = valor1 % valor2;
    
    printf("O resto da divisão entre %d e %d é %d \nk1 = %d", valor1, valor2, resto, valor2);
    return 0;
}
/******************************************************************************
Descrição: Contador de valores pares até um valor sentinela 0 (Do While)
Requer: valores
Assegura: apresentação se é ou não par e a contagem de valores pares na sequência

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada [160];
    int valor;
    
    int contador = 0;
    do{
        printf("Digite os valores: ");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%d", &valor);
        
        if(valor % 2 == 0 && valor != 0){
            contador++;
            printf("É par\n");
        }else
            printf("É ímpar\n");

    }while (valor != 0);
    
        
    printf("Contador de pares: %d\n", contador);

    return 0;
}

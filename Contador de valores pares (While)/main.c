/******************************************************************************
Descrição: Contador de valores pares até um valor sentinela 0 (While)
Requer: valores
Assegura: apresentação se é ou não par e a contagem de valores pares na sequência

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada [160];
    printf("Digite os valores: ");
    fgets(entrada, sizeof entrada, stdin);
    int valor;
    sscanf(entrada, "%d", &valor);
    
    int contador = 0;
    while (valor != 0){
        if(valor % 2 == 0){
            contador++;
            printf("É par\n");
        }else
            printf("É ímpar\n");

        printf("Digite os valores: ");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%d", &valor);
    }
        
    printf("Contador de pares: %d\n", contador);

    return 0;
}

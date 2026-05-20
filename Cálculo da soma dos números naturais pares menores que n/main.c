/******************************************************************************
Descrição: Cálculo da soma dos números naturais pares menores que n
Requer: valor de n
Assegura: apresentação da soma

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    int n = 128;
    int soma = 0;
    
    //Repetição e soma;
    for (int i = 2; i <= n; i+=2)
        soma += i;
    
    printf("A soma é igual a: %d", soma);
   
    return 0;
}
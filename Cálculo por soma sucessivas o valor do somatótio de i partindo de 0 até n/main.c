/******************************************************************************
Descrição: Cálculo por soma sucessivas o valor do somatótio de i partindo de 0 até n
Requer: valor de n
Assegura: apresentação da soma

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    int n = 10;
    int soma = 0;
    
    //Repetição e soma;
    for (int i = 0; i <= n; i++)
        soma += i;
    
    printf("A soma é igual a: %d", soma);
   
    return 0;
}
/******************************************************************************
Descrição: Cálculo o produtório por multiplicação sucessivas de 1 até n
Requer: valor de n
Assegura: apresentação do produto

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    int n = 20;
    unsigned long long int produto = 1;
    
    //Produtos sucessivos;
    for (int i = 1; i <= n; i++)
        produto *= i;
    
    printf("O produto é igual a: %lld", produto);
   
    return 0;
}
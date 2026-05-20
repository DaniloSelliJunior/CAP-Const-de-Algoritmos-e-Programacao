/******************************************************************************
Descrição: Cálculo do somatório dos fatoriais de 1 até n
Requer: valor de n
Assegura: apresentação da soma

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    int n = 4;
    
    //Produtos e somas sucessivos;
    unsigned long long int soma = 0;
    unsigned long long int fatorial = 1;
    for (int i = 1; i <= n; i++){
        fatorial *= i;
        soma += fatorial;
    }
        
        
    printf("A soma dos fatoriais é igual a: %lld", soma);
   
    return 0;
}
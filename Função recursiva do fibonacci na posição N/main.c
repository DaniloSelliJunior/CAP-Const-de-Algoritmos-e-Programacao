/******************************************************************************
Descrição: Função recursiva do fibonacci na posição N 
Requer: Número de N
Assegura: apresentação do valor da sequancia de fibonacci

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

// Função para o calculo do número de fibonacci na posição N
long int fibonacci (int n){
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(void){
    
    printf("fibonacci(%d) = %ld", 9, fibonacci(9));
    return 0;
}
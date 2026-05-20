/******************************************************************************
Descrição: Função recursiva do fatorial de um número natural 
Requer: Número natural
Assegura: apresentação do valor do fatorial

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

//Função para o calculo do fatorial recursivo
long int fatorial (int n){
    if (n == 0) //caso base
        return 1;
    else
        return n * fatorial(n-1); //passo recursivo
}

int main(void){
    
    printf("%d! = %ld", 5, fatorial(5));
    return 0;
}
/******************************************************************************
Descrição: Função recursiva mdc de dois números naturais
Requer: dois valores
Assegura: apresentação do mdc de dois valores

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>


//Função recursiva para o calculo do mdc de dois números
int mdc(int n1, int n2){
    if(n2 == 0) //Caso Base
        return n1;
    else
        return mdc(n2, n1 % n2); //Passo recursivo
}

int main(void){
    
    printf("MDC: %d\n", mdc(379,163));
    
    return 0;
}
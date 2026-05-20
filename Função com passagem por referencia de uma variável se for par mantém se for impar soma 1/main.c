/******************************************************************************
Descrição: Função com passagem por referência de uma variável se for par mantém se for impar soma 1
Requer: variável
Assegura: Apresentação da variável alterada ou não

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

void par(int *);

int main(void){
    int x = 5;
    par(&x);
    
    printf("O valor é: %d", x);
    return 0;
}

//Função tornar par se impar, manter se par
void par(int *a){
    if(*a % 2 != 0)
        *a += 1;
}
/******************************************************************************
Descrição: Versão2 função para ordenar duas variáveis para que a primeira seja menor ou igual a segunda
Requer: dois valores
Assegura: apresentação dos valores em ordem

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

void troca(int*, int*);

int main(void){
    int v1 = 15;
    int v2 = 8;
    
    if(v1 > v2)
        troca(&v1, &v2);
        
    printf("Os valores em ordenados são: %d e %d", v1, v2);
    return 0;
}

//Função de troca de dois valores:
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux; 
}
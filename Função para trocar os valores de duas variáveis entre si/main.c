/******************************************************************************
Descrição: Função para trocar os valores de duas variáveis entre si
Requer: 2 valores
Assegura: Apresentação dos valores trocados

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

void troca(int*, int*);

int main(void){
    int v1 = 13;
    int v2 = 7;
    
    troca(&v1, &v2);
    printf("Depois da troca: v1 = %d e v2 = %d", v1, v2);
    return 0;
}

//Função para trocar o valor de duas variáveis
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
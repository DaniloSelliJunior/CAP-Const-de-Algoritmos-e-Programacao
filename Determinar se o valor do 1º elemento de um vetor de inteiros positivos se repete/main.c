/******************************************************************************
Descrição: Determinar se o valor do 1º elemento de um vetor de inteiros positivos se repete
Requer: Vetor de valores
Assegura: Apresentação se o valor do primeiro eletemento se repete ou não

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO 10

int main(void){
    int vetor[TAMANHO];
    // Gerando um vetor de inteiros aleatórios
    printf("Vetor gerado: ");
    for (int i = 0; i < TAMANHO; i++){
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }
    
    // Encontrando se o valor se repete
    bool repetiu = false;
    int i = 1;
    while(i < TAMANHO && !repetiu){
        if(vetor[i] == vetor[0])
            repetiu = true; 
        i++;
    }

    printf("\nO primeiro valor se repete? %s", repetiu ? "SIM" : "NÃO");

    return 0;
}

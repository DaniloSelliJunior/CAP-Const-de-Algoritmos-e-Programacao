/******************************************************************************
Descrição: Função (procedimento) que pegue todos os valores pares de um vetor de inteiros aleatórios e zere esses valores
Requer: Vetor e tamanho do vetor
Assegura: Apresentação do vetor com os valores pares zerados

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

// Função para zerar os valores pares de um vetor
void zera_par(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++)
        if(vetor[i] % 2 == 0)
            vetor[i] = 0;
}

int main(void){
    int vetor[TAMANHO];
    // Gerando um vetor de inteiros aleatórios
    printf("Vetor gerado: ");
    for (int i = 0; i < TAMANHO; i++){
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }
    
    zera_par(vetor, TAMANHO);
    
    // Imprimindo o vetor com pares zerados
    printf("\nVetor com pares zerados: ");
    for (int i = 0; i < TAMANHO; i++)
       printf("%d ", vetor[i]);
    
    return 0;
}

/******************************************************************************
Descrição: Localizar o valor máximo de um vetor e transpor ele para a última posição
Requer: Vetor de valores
Assegura: Apresentação do vetor com o maior na última posição

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

int main(void){
    int vetor[TAMANHO];
    // Gerando um vetor de inteiros aleatórios
    printf("Vetor gerado: ");
    for (int i = 0; i < TAMANHO; i++){
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }
    
    // Encontrando o valor máximo e sua posição
    int max = vetor[0];
    int posicao_max;
    for (int i = 1; i < TAMANHO; i++){
        if(vetor[i] > max){
           max = vetor[i];
           posicao_max = i;
        }
    }
    
    // Trocando os valores de posição
    vetor[posicao_max] = vetor[TAMANHO - 1];
    vetor[TAMANHO - 1] = max;
    
    // Imprimindo o vetor corrigido
    printf("\nVetor corrigido: ");
    for (int i = 0; i < TAMANHO; i++)
       printf("%d ", vetor[i]);
    
    return 0;
}

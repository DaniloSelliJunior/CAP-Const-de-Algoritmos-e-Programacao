/******************************************************************************
Descrição: Com um vetor de 100 posições preencher o vetor com 5 valores iguais a 10
Requer:
Assegura: Apresentação do vetor

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

#define MAXIMO 100
#define SIZE_INICIAL 20

// Procedimento para escrever um vetor até a posição tamanho
void escreva_vetor (int vetor[], int size){
    printf("[ ");
    for(int i = 0; i < size; i++)
        printf("%d ", vetor[i]);
    printf("]\n");
}

// Função busca elemento no vetor e retorna posição da primeira ocorrencia, caso não encontre retorna -1
int buscar_elemento(int vetor[], int size, int valor){
    for (int i = 0; i < size; i++)
        if(vetor[i] == valor)
            return i;
    //Não encontoru o elemento:
    return -1;
}

// Procedimento para acrescentar um valor no última posição válida de um vetor
void acrescenta_valor (int vetor[], int *size, int valor){
    if (*size == MAXIMO)
        printf("Limite atingido!\n");
    else if (buscar_elemento(vetor, *size, valor) == -1) {
        vetor[*size] = valor;
        *size += 1;
    }
}

int main(void){
    int vetor[MAXIMO];
    int qtd = 0;
    
    // tenta preencher o vetor com o valor 10 até o seu tamanho inicial
    for (int i = 0; i < SIZE_INICIAL; i++)
        acrescenta_valor(vetor, &qtd, 10);
    
    // Escrever o vetor
    escreva_vetor(vetor, qtd);
    
    // Acrescentar um valor no fim do vetor e imprimir
    acrescenta_valor(vetor, &qtd, 5);
    escreva_vetor(vetor, qtd);
    
    printf("O elemento %d aparece na posição: %d", 5, buscar_elemento(vetor, qtd, 5));
    
    return 0;
}
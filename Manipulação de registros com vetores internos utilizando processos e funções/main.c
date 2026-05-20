/******************************************************************************
Descrição: Manipulação de registros com vetores internos utilizando processos e funções
Requer: registros
Assegura:

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAXIMO 100

// Definição de conjunto
struct conjunto{
  int elementos[MAXIMO];
  int quantidade;
};

// Função para verificar se o conjunto é vazio, retorna true ou false
bool conjunto_vazio(struct conjunto conjunto){
    return conjunto.quantidade == 0;
}

// Procedimento para escrever os elementos de um conjunto
void escreva_conjunto(char *nome, struct conjunto conjunto){
    printf("%s = { ", nome);
    for (int i = 0; i < conjunto.quantidade; i++)
        printf("%d ", conjunto.elementos[i]);
    printf("}\n");
}

// Função para verificar se um valor já petence ao conjunto, retorna true ou false
bool pertence(struct conjunto conjunto, int elemento){
    int i = 0;
    while (i < conjunto.quantidade && conjunto.elementos[i] != elemento)
        i++;
    return i < conjunto.quantidade; // é verdade quando termina antes de chegar o fim (pertence)
}

// Procedimento para inserir um novo elemento se esse elemento ainda não pertence ao conjunto
void insira(struct conjunto *conjunto, int novo_elemento){
    if (!pertence(*conjunto, novo_elemento)){
        conjunto->elementos[conjunto->quantidade] = novo_elemento;
        conjunto->quantidade++;
    }
}


int main(void){
    srand(0);
    // conjunto 1 vazio
    struct conjunto conjunto1;
    conjunto1.quantidade = 0;
    
    if(conjunto_vazio(conjunto1))
        printf("O conjunto é vazio\n");
    else
        printf("o conjunto não é vazio\n");
        
    for(int i = 0; i < 10; i++)
        insira(&conjunto1, rand() % 10);
        
    escreva_conjunto("C1", conjunto1);
    return 0;
}

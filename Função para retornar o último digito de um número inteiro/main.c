/******************************************************************************
Descrição: Função para retornar o último digito de um número inteiro
Requer: Entrada do número
Assegura: Apresentação do último dígito

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

//Função para obter a unidade de uma valor
int ultimo_digito(int *);

int main(void){
    int valor = 34;
    
    printf("A unidade do número %d é: %d", valor, ultimo_digito(&valor));    
    return 0;
}

int ultimo_digito(int *a){
    return *a % 10;
}
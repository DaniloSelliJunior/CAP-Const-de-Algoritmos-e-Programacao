/******************************************************************************
Descrição: Função para retornar o digito da dezena de um número natural
Requer: 1 número natural
Assegura: apresentação do digito da dezena 

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

//Função para obter o valor da dezena
int obtem_dezena (int *);

int main(void){
    int valor = 231;
    
    printf("O valor da dezena do número %d é: %d\n", valor, obtem_dezena(&valor));
    
    return 0;
}

int obtem_dezena (int *a){
    return *a/10 % 10;
}
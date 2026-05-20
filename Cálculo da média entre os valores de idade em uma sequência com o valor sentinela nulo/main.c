/******************************************************************************
Descrição: Cálculo da média entre os valores de idade em uma sequência com o valor sentinela nulo
Requer: sequência de idades com pelo menos uma idade e o sentinela no final
Assegura: apresentação da média

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){
    char entrada [160];
    
    //Váriaveis utilizadas para o cálculo
    int idade;
    int quantidade = 0;
    double soma = 0;
    
    //Varredura da sequência, soma e contagem das idades
    do{
        //Obtenha a idade
        printf("Digite a idade: ");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%d", &idade); 
        
        if (idade != 0){
            quantidade++;
            soma += idade;
        }
    }while (idade != 0);

    //Cáculo e apresentação da média
    printf("A média da idade é igual a: %.3f", soma/quantidade);
   
    return 0;
}
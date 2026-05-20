/******************************************************************************
Descrição: Acessar um arquivo com valores reias por linha e somar os valores
Requer: arquivo com 1 valor real por linha
Assegura: Apresentação da soma dos valores

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void){
    // Acessar o arquivo 
    FILE *arquivo = fopen("valores", "r");
    if(arquivo == NULL){
        perror("valores");
        return 1;
    }
    
    // Somar os valores do arquivo
    char entrada[160];
    double soma = 0;
    while(fgets(entrada, sizeof entrada, arquivo) != NULL){
        double valor;
        sscanf(entrada, "%lf", &valor);
        soma += valor;
    }
    
    // Encerrar o acesso do arquivo e apresentar o resultado
    fclose(arquivo);
    printf("A soma dos valores é: %g\n", soma);
    
    return 0;
}
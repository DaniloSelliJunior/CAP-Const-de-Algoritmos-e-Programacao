/******************************************************************************
Descrição: Somatório de um número com for
Requer: Número
Assegura: Apresentação do somatório

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada [160];
    printf("Digite uma valor para obter seu somatório: ");
    fgets(entrada, sizeof entrada, stdin);
    int num;
    sscanf(entrada, "%d", &num);
    
    int soma = 0;
    for (int i = 1; i <= num; i++)
        soma = soma + i;
    
    printf("Somatório = %d", soma);
    return 0;
}

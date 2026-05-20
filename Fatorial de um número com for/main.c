/******************************************************************************
Descrição: Fatorial de um número com for
Requer: Número
Assegura: Apresentação do fatorial do número

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada [160];
    printf("Digite uma valor para obter seu fatorial: ");
    fgets(entrada, sizeof entrada, stdin);
    int num;
    sscanf(entrada, "%d", &num);
    
    int fat = 1;
    for (int i = 1; i <= num; i++)
        fat = i*fat;
    
    printf("Somatório = %d \n", fat);

    return 0;
}

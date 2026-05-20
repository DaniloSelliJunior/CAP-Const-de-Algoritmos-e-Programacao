/******************************************************************************
Descrição: Calcular valor da área de um círculo a partir do raio
Requer: raio
Assegura: apresentação da área do círculo

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){
    char entrada[160];
    
    //Obter raio
    printf("Digite o valor do raio: ");
    fgets(entrada, sizeof entrada, stdin);
    double raio;
    sscanf(entrada, "%lf", &raio);
    
    //Calcular e apresentar a área
    double area = 3.141592653*pow(raio,2);

    printf("A área é igual a: %.2f\n", area);
    
    return 0;
}

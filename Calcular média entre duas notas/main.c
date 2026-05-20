/******************************************************************************
Descrição: Calcular média entre duas notas sendo que cada nota está em uma linha separada
Requer: 2 notas
Assegura: Apresentação da média

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada[160];
    
    //Obter primeira nota
    printf("Digite a primeira nota: ");
    fgets(entrada, sizeof entrada, stdin);
    double nota1;
    sscanf(entrada, "%lf", &nota1);
    
    //Obter segunda nota
    printf("Digite a segunda nota: ");
    fgets(entrada, sizeof entrada, stdin);
    double nota2;
    sscanf(entrada, "%lf", &nota2);
    
    //Calcular e apresentar média
    double media = (nota1+nota2)/2;
    printf("Valor da média: %.2f\n", media);
    
    return 0;
}

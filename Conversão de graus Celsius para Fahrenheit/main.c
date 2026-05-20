/******************************************************************************
Descrição: Conversão de graus Celsius para Fahrenheit
Requer:Temperatura em Celsius
Assegura: Apresentação da temperatura equivalente em Fahrenheit

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    //Obenha a temperatura em Celsius
    printf("Digite um valor em Celsius: ");
    char entrada[160];
    fgets(entrada, sizeof entrada, stdin);
    double celsius;
    sscanf(entrada, "%lf", &celsius);
    
    //Calcule a temperatura equivalente em Fahrenheit
    double fahrenheit = celsius * 9/5 + 32;
    
    // Apresente a temperatura em Fahrenheit
    printf("%g Celsius = %g Fahrenheit\n", celsius, fahrenheit);
   
    return 0;
}

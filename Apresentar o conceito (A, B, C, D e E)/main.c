/******************************************************************************
Descrição: Apresentar o conceito (A, B, C, D e E) a partir de uma nota de 0 a 10
Requer: Nota de 0 a 10
Assegura: Apresentação do conceito

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada[160];
    //Obter Nota
    printf("Digite a nota de 0 a 10: \n");
    fgets(entrada, sizeof entrada, stdin);
    double nota;
    sscanf(entrada, "%lf", &nota);
    
    //Converter para o conceito
    char conceito;
    
    if (nota >= 9 && nota <= 10)
        conceito = 'A';
    else if (nota > 8.5)
        conceito = 'B';
    else if (nota > 4.5)
        conceito = 'C';
    else if (nota > 1)
        conceito = 'D';
    else
        conceito = 'E';
    
    
    printf("O conceito equivalente é: %c", conceito);
    
    return 0;
}

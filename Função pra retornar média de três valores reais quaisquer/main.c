/******************************************************************************
Descrição: Função pra retornar média de três valores reais quaisquer
Requer: 3 valores
Assegura: Apresentação da média

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

double media (double *, double *, double *);

int main(void){
    double v1 = 10;
    double v2 = 8;
    double v3 = 7;
    
    printf("A média os valores %g, %g e %g é: %g\n", v1, v2, v3, media(&v1, &v2, &v3));
    
    return 0;
}

// Função para retornar média entre 3 valores
double media (double *a, double *b, double *c){
    return (*a + *b + *c)/3;
}
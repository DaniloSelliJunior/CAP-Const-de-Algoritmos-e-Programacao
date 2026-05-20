/******************************************************************************
Descrição: Função que recebe 2 valores e altera ambos com a média entre eles
Requer: 2 valores
Assegura: Apresentação dos valores

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

void med2 (double*, double*); //Função que recebe 2 valores e altera ambos com a média entre eles

int main(void){
    double v1 = 10.0;
    double v2 = 5.0;
    
    med2(&v1, &v2);
    printf("Os valores são %g e %g", v1, v2);
    return 0;
}

void med2 (double *a, double *b){
    *a = (*a + *b)/2;
    *b = *a;
}
/******************************************************************************
Descrição: Uma função que receba um valor x real e retone o seu dobro e zere o valor x
Requer: Valor x
Assegura: Apresentação de 2x e x zerado

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

double f(double *);

int main(void){
    double x = 10;
    double y = f(&x);
    printf("x = %g e y = %g\n", x, y); // x = 0 e y = 20
    
    return 0;
}

double f(double *x){
    double y = *x*2;
    *x = 0;
    return y;
}
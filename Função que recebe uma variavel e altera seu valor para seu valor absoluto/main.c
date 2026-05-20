/******************************************************************************
Descrição: Função que recebe uma variavel e altera seu valor para seu valor absoluto
Requer: variavel
Assegura: Apresentação do valor absoluto da variavel

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

double absolute(double *);

int main(void){
    double x = -2.95;
    double y = absolute(&x);
    printf("absolute(%g) = %g\n", x, y);
    
    return 0;
}

//Definição da função absolute
double absolute(double *x){
    double y = *x; //Recebe o valor de x (sem alteração)
    if(*x < 0)
        y = -*x; //Altera o valor de x se preciso
    return y;
}
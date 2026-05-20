/******************************************************************************
Descrição: Função para retornar a distância entre dois pontos rm um espaço 3d a partir das coordenadas
Requer: coordenadas de 2 pontos
Assegura: Apresentação da distância

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <math.h>

//Retorna a distancia entre dois pontos de coordenadas [(x1; y1; z2) e (x2; y2; z2)]
double distancia_3d(double *, double *, double *, double *, double *, double *);

int main(void){
    //coordenadas ponto 1
    double x1 = 3;
    double y1 = 4;
    double z1 = 0;
    
    //coordenadas ponto 2
    double x2 = 0;
    double y2 = 0;
    double z2 = 0;
    
    printf("A distância entre os dois pontos dados é: %g", distancia_3d(&x1, &y1, &z1, &x2, &y2, &z2));
    return 0;
}

double distancia_3d(double *x1, double *y1, double *z1, double *x2, double *y2, double *z2){
    return sqrt(pow(*x1 - *x2, 2) + pow(*y1 - *y2, 2) + pow(*z1 - *z2, 2));
}
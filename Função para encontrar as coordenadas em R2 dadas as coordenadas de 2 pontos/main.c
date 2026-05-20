/******************************************************************************
Descrição: Função para encontrar as coordenadas em R2 dadas as coordenadas de 2 pontos
Requer: coordenadas de dois pontos
Assegura: Apresentação da coordenadas do ponto médio

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

//Função para encontrar o ponto médio
void ponto_medio(double, double, double, double, double *, double *);

int main(void){
    //coordenadas ponto 1
    double x1 = 8;
    double y1 = 4;
    
    //coordenadas ponto 2
    double x2 = 0;
    double y2 = 0;
    
    //coordenadas ponto médio
    double xm, ym;
    
    ponto_medio(x1, y1, x2, y2, &xm, &ym);
    
    printf("As coordenadas do ponto medio entre os dois pontos dado é [%g ; %g]\n", xm, ym);
    return 0;
}

void ponto_medio(double x1, double y1, double x2, double y2, double *xm, double *ym){
    *xm = (x1 + x2)/2;
    *ym = (y1 + y2)/2;
}
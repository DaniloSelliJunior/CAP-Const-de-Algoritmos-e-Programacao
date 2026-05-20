/******************************************************************************
Descrição: Cálculo da área de um retângulo a partir das coordenadas de 2 vértices opostos.
Requer: coordenadas cartesianas de 2 vértices
Assegura: apresentação da área

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){
    char entrada[160];
    
    //Obtenha as coordenadas do primeiro vértice
    double x1, y1; //coordenadas (x1;y1) do primeiro vértice
    printf("Digite as coordenadas do primeiro vértice do retângulo (x1;y1): ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada,"%lf%lf", &x1, &y1);
    
    //Obtenha as coordenadas do segundo vértice
    double x2, y2; //coordenadas (x2;y2) do segundo vértice
    printf("Digite as coordenadas do segundo vértice do retângulo (x2;y2): ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada,"%lf%lf", &x2, &y2);
    
    //Calculo da área e apresentação da área
    double area = fabs(x1-x2) * fabs(y1-y2); 
    printf("A área do retângulo é: %.2f", area);
    
    return 0;
}

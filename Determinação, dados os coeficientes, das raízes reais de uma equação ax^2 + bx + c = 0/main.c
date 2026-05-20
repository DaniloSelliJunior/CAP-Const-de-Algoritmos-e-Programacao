/******************************************************************************
Descrição: Determinação, dados os coeficientes, das raízes reais de uma equação ax^2 + bx + c = 0, 
           nunca sendo a e b simultaneamente nulos
Requer: 3 coeficiente a, b e c.
Assegura: apresentação das raízes reais ou sem apresentar nada se não houver nenhuma raíz

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){
    char entrada [160];
    
    //Obtenha os coeficientes a b c
    printf("Digite os coeficiente a, b, c respectivamente: ");
    fgets(entrada, sizeof entrada, stdin);
    double a, b, c;
    sscanf(entrada, "%lf%lf%lf", &a, &b, &c);
    
    double raiz1, raiz2;
    
    //Verifição a = 0
    if (a == 0){
        //(equação de primeiro grau)
        raiz1 = -c/b;
        printf("A equação de primeiro grau tem apenas uma raiz real sendo x = %g.\n", raiz1);
        
    }else { 
        //(equação de segundo grau)
        double delta = pow(b,2) - 4*a*c;
        
        //verificação de delta e cálculo das raízes
        if (delta == 0){
            //apenas uma raiz
            raiz1 = -b/(2*a);
            printf("A equação de segundo grau tem apenas uma raiz real sendo x = %g.\n", raiz1);
            
        }else if (delta > 0){ 
            //duas raízes
            raiz1 = (-b + sqrt(delta)) / (2*a);
            raiz2 = (-b + sqrt(delta)) / (2*a);
            printf("A equação de segundo grau duas raízes reais sendo x1 = %g e x2 = %g.\n", raiz1, raiz2);
        }
    }
   
    return 0;
}
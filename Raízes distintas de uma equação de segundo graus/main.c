/******************************************************************************
Descrição: Analisar uma equação de segundo grau e determinar se há ou não duas raízes distintas
Requer: 3 coeficientes, a, b, c
Assegura: apresentação da mensagem se há ou não há.

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void) {
    //Obtenha os coeficientes a, b, c
    char entrada[160];
    double a, b, c;
    printf("Digite os coeficientes: ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada,"%lf%lf%lf", &a, &b, &c);
    
    if(a==0)
        printf("Não há\n");
    else {
        //Calcule o delta
        double delta = pow(b,2) - 4*a*c;
        
        //Verificação das raízes e apresentação da mensagem "há" e "não há"
        if(delta > 0 && a != 0)
            printf("Há \n");
        else
            printf("Não há\n");
    }
    
    return 0;
}

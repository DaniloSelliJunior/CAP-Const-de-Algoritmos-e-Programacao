/******************************************************************************
Descrição: Cálculo da média de duas notas e sinalização de aprovação ou reprovação
Requer: duas notas
Assegura: apresentação da média e a mensagem

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    //Obtenha as notas
    char entrada[160];
    double nota1, nota2;
    printf("Digite as duas notas: ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada,"%lf%lf", &nota1, &nota2);

    //Calcule a média
    double media = (nota1 + nota2)/2;
    
    //Apresente a média e a mensagem de aprovação ou reprovação
    printf("A média das provas é: %.2f\n", media);
    if (media >= 6){
        printf("Aluno APROVADO");
    }
    else{
        printf("Aluno REPROVADO");
    }
    return 0;
}



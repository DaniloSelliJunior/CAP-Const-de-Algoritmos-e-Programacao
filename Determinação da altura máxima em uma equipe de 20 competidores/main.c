/******************************************************************************
Descrição: Determinação da altura máxima em uma equipe de 20 competidores
Requer: sequência com 20 medidas de altura
Assegura: a altura máxima

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada [160];
    
    //Obter a primeira altura 
    printf("Digite a 1ª altura: ");
    fgets(entrada, sizeof entrada, stdin);
    double altura;
    sscanf(entrada, "%lf", &altura);
    
    //Varredura e comparação da altura
    double altura_max = altura; //variável auxiliar que recebe a maior altura até então
    
    for (int i = 2; i <= 20; i++){
        //Obtenha a próxima altura
        printf("Digite a %dª altura: ", i);
        fgets(entrada, sizeof entrada, stdin);
        double altura;
        sscanf(entrada, "%lf", &altura);
        
        //Comparação da última maior altura com a atual
        if (altura > altura_max)
            altura_max = altura;
    }
    
    printf("A altura máxima do equipe é: %.2f.\n", altura_max);
    
    return 0;
}
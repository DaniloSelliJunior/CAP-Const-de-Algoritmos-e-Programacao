/******************************************************************************
Descrição: Calcular o fatorial de um número (while)
Requer: 1 Número
Assegura: Apresentação do fatorial

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada [160];
    int valor;
    
    printf("Digite o número: ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &valor);
       
    int fatorial = 1;
    int valor_inicial = valor;
    while (valor != 0){
       fatorial *= valor;
       valor--;
    }
    
        
    printf("Fatorial de %d é: %d\n", valor_inicial, fatorial);

    return 0;
}
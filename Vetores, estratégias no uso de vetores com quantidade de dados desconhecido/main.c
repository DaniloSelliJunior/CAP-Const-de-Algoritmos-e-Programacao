/******************************************************************************
Descrição: Vetores, estratégias no uso de vetores com quantidade de dados desconhecido
Requer: 
Assegura: 

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    // Aplicação 1: guardar a quantidade variável de valores
    // Exemplo: ler dados até digitar -1 e colocar em um vetor; máx 100
    int vetor[100];
    int valor;
    int quantidade = 0;
    
    do {
        char entrada[160];
        printf("Digite os valores e com -1 para finalizar: ");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%d", &valor);
        
        if (valor != -1) {
            vetor[quantidade] = valor;
            quantidade++;
        }
        
    } while(valor != -1);
    
    for (int i = 0; i < quantidade; i++)
        printf("%d ", vetor[i]);
    
    return 0;
}


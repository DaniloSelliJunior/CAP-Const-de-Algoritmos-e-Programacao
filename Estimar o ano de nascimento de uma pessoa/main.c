/******************************************************************************
Descrição: Estimar o ano de nascimento de uma pessoa a partir da sua idade
Requer: idade
Assegura: Ano de nascimento

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada[160];
    
    //Obter idade
    printf("Digite a sua idade em anos: ");
    fgets(entrada, sizeof entrada, stdin);
    int idade;
    sscanf(entrada, "%d", &idade);
    
    //Calcular e apresentar o ano de nascimento
    int ano_nasc = 2025 - idade;
    printf("Você nasceu em: %d\n", ano_nasc);
    
    return 0;
}

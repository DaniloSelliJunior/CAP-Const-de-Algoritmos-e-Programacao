/******************************************************************************
Descrição: Exemplo de leituras diversas em C
Requer: muitas coisas digitadas pelo usuário
Assegura: apresentar os valores lidos

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void){
    char entrada[160];
    
    //int
    printf("Digite um valor inteiro: ");
    fgets(entrada, sizeof entrada, stdin);
    int valor_int;
    sscanf(entrada, "%d", &valor_int);
    printf("O valor digitado foi: %d\n", valor_int);
   
   //double
    printf("Digite um valor real: ");
    fgets(entrada, sizeof entrada, stdin);
    double valor_double;
    sscanf(entrada, "%lf", &valor_double);
    printf("O valor digitado foi: %g\n", valor_double);
    
    //int + double
    printf("Digite valores inteiro e real: ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d%lf", &valor_int, &valor_double);
    printf("Os valores digitados foram: %d e %g\n", valor_int, valor_double);
    
    //texto
    printf("Digite um texto: ");
    char texto[160];
    fgets(texto, sizeof texto, stdin);
    texto[strlen(texto) - 1] = '\0'; //remove o enter no final do texto
    printf("O texto digitado foi: \"%s\" \n", texto);
    
    return 0;
}

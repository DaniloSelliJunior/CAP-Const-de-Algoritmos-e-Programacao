/******************************************************************************
Descrição: Manipulação de stings 2
Requer: Strings
Assegura: demonstração do resultado de manipulações possiveis

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Função para verificar se um caracter é vogal, retorne true se verdadeira
bool é_vogal(char s){
    if(s == 'a' || s == 'A' || s == 'e' || s == 'E' || s == 'i' || s == 'I' || s == 'o' || s == 'O' || s == 'u' || s == 'U')
        return true;
    else
        return false;
}

// Função para verificar se um caracter é maiusculo, retorne true se verdadeira
bool é_maiusculo(char s){
    if(s >= 'A' && s <= 'Z')
        return true;
    else
        return false;
}

// Função para contar quantas vogais há em uma string
int qnts_vogais (char *s){
    int i = 0;
    int contador = 0;
    
    while(s[i] != '\0'){
        if(é_vogal(s[i]))
            contador++;
        i++;
    }
    return contador;
}

int main(void){
    char c = 'a';
    
    char s[100] = "Qualquer frase";
    
    printf("O caracter '%c' é %s\n", c, é_vogal(c) ? "vogal" : "consoante");
    
    printf("O caracter '%c' é %s\n", c, é_maiusculo(c) ? "maiusculo" : "minusculo");
    
    printf("A string '%s' tem %d vogais\n", s, qnts_vogais(s));
    
    return 0;
}
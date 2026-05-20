/******************************************************************************
Descrição: Função para verificar se dado um valor natural seja divisível por 3 e 5 (verdadeiro e falso)
Requer: Valor
Assegura: Apresentação se verdadeiro

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

// Função retorna verdadeiro se um valor for divisível por 3 e 5
void divisivel_3_5 (int *, char *);

int main(void){
    int valor = 15;
    char resposta;
    divisivel_3_5(&valor, &resposta);
    
    printf("O valor %d, é divisível por 3 e 5? \nResposta: %c", valor, resposta);
    
    return 0;
}

void divisivel_3_5 (int *valor, char *resposta){
    if ((*valor % 3 == 0) && (*valor % 5 == 0))
        *resposta = 'V';
    else
        *resposta = 'F';
}
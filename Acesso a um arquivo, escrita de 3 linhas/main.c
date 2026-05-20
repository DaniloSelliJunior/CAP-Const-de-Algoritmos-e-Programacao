/******************************************************************************
Descrição: Acesso a um arquivo, escrita de 3 linhas
Requer: 3 linhas digitadas pelo usuário
Assegura: Apresentação do arquivo com as 3 linhas

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void){
    // Acesso ao arquivo
    FILE *arquivo = fopen("saida-exemplo.txt", "w");
    if (arquivo == NULL){
        perror(arquivo);
        return 1;
    }
    
    // Uso do arquivo
    char entrada[160];
    printf("Digite 3 linhas: \n");
    
    for(int i = 0; i < 3; i++){
        // Leitura e escrita das 3 linhas
        fgets(entrada, sizeof entrada - 1, stdin);
        fprintf(arquivo, "%s", entrada);
    }
    
    // Encerramento do acesso ao arquivo
    fclose(arquivo);
    
    return 0;
}

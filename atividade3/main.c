/******************************************************************************
Descrição: 
Requer:  
Assegura: 

Danilo Djovano Selli Junior Nº UFSCar 842868
Enzo Furquim Bonetto Nº UFSCar 842869
*******************************************************************************/
#include <stdio.h>

// Estrutura do registro de pessoa
struct pessoa {
    char nome[100];
    char telefone[20];
    char estado[3];
};


int main(void) {
     // Abrir os 3 arquivos para leitura
    FILE *arquivo_nomes = fopen("nomes.txt", "r");
    if (arquivo_nomes == NULL) {
        perror("Acesso nomes");
    }
    
    FILE *arquivo_telefones = fopen("telefones.txt", "r");
    if (arquivo_telefones == NULL) {
        perror("Acesso telefones");
    }
    
    FILE *arquivo_estados = fopen("estados.txt", "r");
    if (arquivo_estados == NULL) {
        perror("Acesso estados");
    }
    
    // Abrir o arquivo para escrita
    FILE *arquivo_registros = fopen("registros.dat", "w");
    if (arquivo_registros == NULL) {
        perror("Acesso registros");
    }
    
    int contador_registro = 0;
    struct pessoa registro;
    
    // Varre o arquivo registrando os dados dos 3 arquivos de leitura para o arquivo de registros
    while(fgets(registro.nome, sizeof registro.nome, arquivo_nomes) != NULL){
        fgets(registro.telefone, sizeof registro.telefone, arquivo_telefones);
        fgets(registro.estado, sizeof registro.estado, arquivo_estados);
        
        // Escreve o registro criado no arquivo de saída e conta o registro
        fwrite(&registro, sizeof registro, 1, arquivo_registros);
        contador_registro += 1;
    }
    
    printf("%d", contador_registro);
    
    // Fechar todos os arquivos para
    fclose(arquivo_nomes);
    fclose(arquivo_telefones);
    fclose(arquivo_estados);
    fclose(arquivo_registros);
    
    return 0;
}

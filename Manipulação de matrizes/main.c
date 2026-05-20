/******************************************************************************
Descrição: Funções e manipulações com matrizes
Requer: Matriz 
Assegura: Apresentação do resultado das funções e manipulações

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

#define MAX 100

// Estrutura da matriz
struct matriz{
    int linhas, colunas;
    double dados[MAX][MAX];
};

// Função para criar uma nova matriz
struct matriz nova_matriz(int linhas, int colunas){
    struct matriz matriz;
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    
    for (int i = 0; i < matriz.linhas; i++)
        for(int j = 0; j < matriz.colunas; j++)
            matriz.dados[i][j] = i + j;
            
    return matriz;
}

// Procedimento para imprimir matriz
void imprime_matriz(struct matriz matriz){
    for (int i = 0; i < matriz.linhas; i++){
        printf("[");
        for(int j = 0; j < matriz.colunas; j++)
            printf("%5.1f ", matriz.dados[i][j]);
            
        printf("]\n");
    }
    printf("\n");
}

// Função para multiplcar um valor escalar e uma matriz, elemento por elemento
struct matriz escalarXmatriz(struct matriz matriz, double escalar){
    struct matriz matriz_multiplicada;
    matriz_multiplicada.linhas = matriz.linhas;
    matriz_multiplicada.colunas = matriz.colunas;
    for (int i = 0; i < matriz.linhas; i++)
        for(int j = 0; j < matriz.colunas; j++)
            matriz_multiplicada.dados[i][j] = escalar*matriz.dados[i][j];
        
    return matriz_multiplicada;
}

// Função para somar duas matrizes 
struct matriz soma_matriz (struct matriz m1, struct matriz m2){
    // Cria matriz para receber a soma
    struct matriz matriz_somada;
    // Verifica se as dimensões são iguais
    if((m1.linhas == m2.linhas) && (m1.colunas == m2.colunas)){
        // Dimensões batem
        matriz_somada.linhas = m1.linhas;
        matriz_somada.colunas = m1.colunas;
        // percorre a matriz somando os dados da matriz m1 e m2
        for (int i = 0; i < matriz_somada.linhas; i++)
            for(int j = 0; j < matriz_somada.colunas; j++)
                matriz_somada.dados[i][j] = m1.dados[i][j] + m2.dados[i][j];
    }else{
        // ERRO - Dimensões não batem
        matriz_somada.linhas = 0;
        matriz_somada.colunas = 0;
        printf("ERRO: A dimensão das matrizes não batem!");
    }
        
    return matriz_somada;    
}

// Função para subtrair a duas matrizes (m1 - m2)
struct matriz subtrai_matriz(struct matriz m1, struct matriz m2){
    // Retorna a soma entre a primeira matriz e a segunda matriz multiplicada por -1
    return soma_matriz(m1, escalarXmatriz(m2, -1));
}

// Função para multiplicar elemento por elemento de uma dada linha i da matriz 1 com dada coluna j da matriz 2 e some os valores
double linhaM1_X_colunaM2(struct matriz m1, struct matriz m2, int i, int j){
    double soma = 0;
    //verifica se as dimensões batem
    if (m1.colunas == m2.linhas){
        // Dimensões batem
        for (int k = 0; k < m1.colunas; k++)
            soma += m1.dados[i][k]*m2.dados[k][j];
    }else{
        // ERRO - Dimensões não batem
        printf("ERRO: A dimensão das matrizes não batem!");
    }
    return soma;
}


int main(void){
    struct matriz matriz1 = escalarXmatriz(nova_matriz(4, 4), 15);
    struct matriz matriz2 = escalarXmatriz(nova_matriz (4, 4), 10);
    
    printf("Escrevendo a matriz 1 original: \n");
    imprime_matriz(matriz1);
    
    printf("Escrevendo a matriz 2 original: \n");
    imprime_matriz(matriz2);
    
    printf("Escrevendo a matriz multiplicada por um escalar: \n");
    imprime_matriz(escalarXmatriz(matriz1, 5));
    
    printf("Escrevendo a soma entre duas matriz (m1 + m2): \n");
    imprime_matriz(soma_matriz(matriz1, matriz2));
    
    printf("Escrevendo a subtração entre duas matriz (m1 - m2): \n");
    imprime_matriz(subtrai_matriz(matriz1, matriz2));
    
    printf("Soma da multiplicação elemento por elemento da linha %d da matriz 1 pela coluna %d da matriz 2 é: %g \n", 1, 2, linhaM1_X_colunaM2(matriz1, matriz2, 1, 2));
    
    return 0;
}

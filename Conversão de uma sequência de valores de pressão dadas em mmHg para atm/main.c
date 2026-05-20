/******************************************************************************
Descrição: Conversão de uma sequência de valores de pressão dadas em mmHg para atm, usando 0 como sentinela
Requer: sequência de valores de pressão em mmHg
Assegura: O valor de cada mediade convertido em mmHg

Danilo Djovano Selli Junior Nº UFSCar 842868
*******************************************************************************/
#include <stdio.h>

int main(void){
    char entrada [160];
    
    //Obter a pressão em mmHg
    printf("Digite a pressão em mmHg: ");
    fgets(entrada, sizeof entrada, stdin);
    double press_mmhg;
    sscanf(entrada, "%lf", &press_mmhg);
    
    //Varredura e conversão    
    double press_atm;
    while (press_mmhg != 0){
       press_atm = press_mmhg/760;
       printf("A pressão %g em mmHg é equivalente a: %g atm\n", press_mmhg, press_atm);
       
       //Obter a proxima pressão em mmHg
        printf("Digite o número: ");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%lf", &press_mmhg);
    }
    
    return 0;
}
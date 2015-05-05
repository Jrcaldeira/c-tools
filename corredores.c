/*
  Faça um programa que que receba o número máximo 
  de corredores, receba o tempo de
  cada um e exiba o maior tempo após o término.
*/
#include <stdio.h>

int main(){
    int num,i;
    float tempo,max=0;
    printf("\nDigite o numero de corredores: ");
    scanf("%d",&num);
// para cada corredor há uma execução do laço    
    for(i=1;i<=num;i++){
        printf("\nInforme o tempo do corredor %d: ",i);
        scanf("%f",&tempo);
// cada vez que um tempo maior é encontrado este 
// é salvo na variável "max".        
        if(tempo>max)
            max=tempo;
    }
    printf("\nO maior tempo foi %.2f\n",max);
    return 0;
}

#include<stdio.h>

int main(){
    float salario,max;
    max=1.5*750;  
    /* a variável max possui o valor maximo de salário
       para o qual o indivíduo pode receber aumento.  */
    printf("\nInforme o salario: ");
    scanf("%f",&salario);
    /*  Se o salário for menor que max o novo salário
        é calculado   */
    if(salario<max){            
       salario=salario*1.3;
       printf("\nO novo salario e: %.2f",salario);
    }
    else 
       printf("\nSem direio a aumento, salario = %.2f",salario);
    printf("\n\n");
    return 0;
}

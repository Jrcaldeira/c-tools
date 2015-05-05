/*
 Faça um programa que receba salários de 
 funcionários até que o valor -999 seja inserido e
 após o término exiba o maior salário.
 */
#include <stdio.h>

int main(){
    float salario, max=0,stop=-999;
// em "stop" está armazenada a condição de parada
    do{
       printf("\nDigite o salario: ");
       scanf("\n%f",&salario);
// enquanto não for digitada a condição de parada
// o programa continua pedindo valores ao usuario
       if(salario!=stop){
// sempre que um salario maior for digitado seu 
// valor estará salvo em "max".		   
          if(salario>max)
             max=salario;
       }
    }while(salario!=stop);
    printf("\nO maior salario foi: %.2f\n",max);
    return 0;
}
    

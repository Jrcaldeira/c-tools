#include <stdio.h>
#include <math.h> // biblioteca matemática, permite o uso da função pow

int main(){
    float peso,altura,imc;
    printf("\nInforme o peso(kg): ");
    scanf("%f",&peso);
    printf("\nInforme a altura(m): ");
    scanf("%f",&altura);
    altura=pow(altura,2); // a variável altura foi reaproveitada 
    /* a função pow faz a operação de potenciação
       ao utilizar esta função temos pow(a,b) significando a^b.
    */
    imc=peso/altura;
    if(imc<=20.0)
        printf("\nIMC = %.3f  Abaixo do peso",imc);
    else if(imc>20.0 && imc<=25.0)
        printf("\nIMC = %.3f  Peso Ideal",imc);
    else if(imc>25.0 && imc<=30.0)
        printf("\nIMC = %.3f  Sobrepeso",imc);
    else if(imc>30.0 && imc<=40.0)
        printf("\nIMC = %.3f  Obesidade",imc);
    else if(imc>40.0)
        printf("\nIMC = %.3f  Obesidade morbida",imc);
    printf("\n\n");
    return 0;
}

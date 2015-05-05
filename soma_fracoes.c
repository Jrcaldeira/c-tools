/*
Escreva um programa em C que realiza a soma de 2 frações. O
programa deve solicitar que o usuário informe 4 valores inteiros
(descritos abaixo) e calcular e imprimir a soma das frações.
- numerador da primeira fração
- denominador da primeira fração
- numerador da segunda fração
- denominador da segunda fração
*/

#include <stdio.h>

int main(){
    float numa,numb,dena,denb,a,b,ans;
    printf("\nDigite o primeiro numerador: ");
    scanf("%f",&numa);
    printf("\nDigite o primeiro denominador: ");
    scanf("%f",&dena);
    // caso o denominador seja nulo o programa exibe mensagem de erro
    if(dena==0)
        printf("\nImpossivel dividir por zero");
    else{
        printf("\nDigite o segundo numerador: ");
        scanf("%f",&numb);
        printf("\nDigite o segundo denominador: ");
        scanf("%f",&denb);
    // caso o denominador seja nulo o programa exibe mensagem de erro
        if(denb==0)
            printf("\nImpossivel dividir por zero");
        else{
    // se os denominadores forem diferentes de zero as frações são calculadas
            a=numa/dena;
            b=numb/denb;
            ans=a+b;  //soma das frações
            printf("\n%.3f + %.3f = %.3f",a,b,ans);
        }
    }
    return 0;
}

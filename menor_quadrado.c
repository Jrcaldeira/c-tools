/*
Faça um programa para imprimir o menor inteiro positivo x cujo
quadrado é superior a um valor L dado.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int num, quad,i=1;
    printf("\nDigite um numero: ");
    scanf("%d",&num);
    do{
       quad=pow(i,2);
       i++;
    }while(quad<=num);
    printf("\nO menor numero cujo quadrado e maior que %d e %d",num,(i-1));
    return 0;
}

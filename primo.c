/*
Faça um programa para ler um número e escreva se ele "é primo" ou
"não é primo".
*/

#include <stdio.h>

int main()
{
    int i,num,resto,soma=0;
    printf("\ninforme um numero: ");
    scanf("%d",&num);
    /* este laço é percorrido do fim para o inicio, para cada interação
    é calculado o resto da divisao do numero digitado por um numero cada
    vez menor, como o primeiro teste é feito com o valor imediatamente
    anterior ao numero digitado e o ultimo é feito com dois, para o numero
    digitado ser primo toda vez que o resto for calculado ele deve possuir um
    valor maior que zero. Se em algum momento o resto for zero significa
    que o numero é divisível por um numero que não seja 1 nem ele mesmo.
    Desta forma o numero não é primo.
    A variável soma serve de controle, cada vez que é encontrado um resto
    igual a zero ela é incrementada. Se o numero for primo ao final do programa
    soma deve valer zero.
    */
    for(i=num-1;i>1;i--){
        resto=num%i;
        if(resto==0)
            soma++;
    }
    if(soma==0)
       printf("\n%d e primo",num);
    else
       printf("\n%d nao e primo",num);
    return 0;
}

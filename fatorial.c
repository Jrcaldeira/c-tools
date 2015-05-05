/*
Criar uma função que receba um número inteiro e calcule o fatorial
correspondente a esse número.
*/

#include <stdio.h>

int fatorial(int numero){
    int fat=1,i=2;  // fat inicia com um para ser multiplicado no futuro
    for(i=2;i<=numero;i++)
        fat=fat*i;  // de 2 até o numero informado fat é multiplicado
    return fat;     // por todos numeros do intervalo
}

int main(){
    int num,fat;
    printf("\nDigite um numero: ");
    scanf("%d",&num);
    fat=fatorial(num);   // fat recebe o valor retornado pela funcao fatorial()
    printf("\nO fatorial de %d e: %d",num,fat);
    return 0;
}

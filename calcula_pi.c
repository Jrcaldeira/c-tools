#include <stdio.h>
#include <math.h>

int main(){
    float pi=0,num,den;
    int n,cont=0;
    printf("\nDigite o numero de termos da serie a serem utilizados: ");
    scanf("%d",&n);
/* Caso seja escolhido um numero de termos menor do que um
   o programa exibe uma mensagem de erro e interrompe.
*/
    if(n<1)
        printf("\nERROR 404\n");
/*  caso o numero de termos seja maior que um a aproximação
    de pi é calculada com base na série. Aqui numerador e 
    denominador são calculados separados e em seguida são
    incrementados em "pi"
*/
    else{
        for(cont=0;cont<n;cont++){
            num=pow(-1,cont);
            den=2*cont + 1;
            pi=pi+num/den;
        }
    }

// para finalizar "pi" é multiplicado por 4.
    pi=4*pi;
    printf("\nO valor aproximado de pi com %d termos eh: %.15f",n,pi);
    return 0;
}

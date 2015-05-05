#include <stdio.h>

int main(){
    float a,b,ans;
    int opcao;
    printf("\nMENU");
    printf("\n1.SOMA");
    printf("\n2.SUBTRACAO");
    printf("\n3.MULTIPLICACAO");
    printf("\n4.DIVISAO");
    printf("\n\nInforme o numero correspondente a operacao desejada: ");
    scanf("%d",&opcao);
    printf("\nInforme o primeiro numero: ");
    scanf("%f",&a);
    printf("\nInforme o segundo numero: ");
    scanf("%f",&b);
    switch(opcao){      
    
    /*  nesta parte o switch verificará a opção escolhida e então a ação
        determinada será executada. O default é o caso em que a opção escolhida
        não foi nenhuma das previamente cadastradas. 
    */
        case 1:
            ans=a+b;
            printf("\n%.5f + %.5f = %.5f\n",a,b,ans);
            break;
        case 2:
            ans=a-b;
            printf("\n%.5f - %.5f = %.5f\n",a,b,ans);
            break;
        case 3:
            ans=a*b;
            printf("\n%.5f x %.5f = %.5f\n",a,b,ans);
            break;
        case 4:
            if(b==0)
            // caso o denomidador seja zero a divisão não pode acontecer
                printf("\nImpossivel dividir por zero\n");
            else{
                ans=a/b;
                printf("\n%.5f / %.5f = %.5f\n",a,b,ans);
            }
            break;
        default:
            printf("\nError404: Opcao inexisetente\n");
    }          
    return 0;
}

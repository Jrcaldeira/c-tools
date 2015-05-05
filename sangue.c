#include <stdio.h>

int main(){
    char nome[60];
    int idade;
    float peso;
    printf("\nInforme o nome:");
    gets(nome);                    
    printf("\nInforme a idade:");
    scanf("%d",&idade);
    printf("\nInforme o peso:");
    scanf("%f",&peso);
    
    /* Se a idade for maior que 18 anos 
       e menor que 67 anos então o programa
       verifica o peso do indivíduo, caso
       contrário o indivíduo é descartado */

    if(idade>=18 && idade<=67){   
        if(peso>50.0)  
        // caso o peso seja maior que 50Kg entao o individuo pode doar sangue
            printf("\n%s pode doar sangue\n",nome);
        else
        // se o peso for menor que 50Kg o individuo no pode doar sangue  
            printf("\n%s nao pode doar sangue\n",nome);
    }
    else 
        printf("\n%s nao pode doar sangue\n",nome);
    return 0;
}


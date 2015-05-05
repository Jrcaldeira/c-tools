#include <stdio.h>

int main(){
   int a;
   printf("\nDigite um numero:");
   scanf("%d",&a);
   /*
   O operador % retorna o resto da divisão de inteiros
   no caso a%2 retorna o resto da divisão de "a" por 2.      
   */ 
   if(a%2==0)  
       printf("\n%d e´ par\n",a);
   else
       printf("\n%d e´ impar\n",a);
   return 0;
}   

/*Criar uma função que receba uma medida em cm e retorne em polegadas,
sabendo que 1 polegada = 2,54 cm.
*/

#include <stdio.h>


// funcao que recebe um float, no caso um valor em centimetros
// e retorna outro float, o valor correspondente em polegadas.
float polegada(float cm){
    float pol;
    pol=cm/(2.54);
    return pol;
}

int main(){
    float pol,cm;
    printf("\nDigite um valor em centimetros: ");
    scanf("%f",&cm);
    pol=polegada(cm);  // chamada da funcao
    printf("\n %.3f cm correspondem a %.3f em polegadas.",cm,pol);
    return 0;
}

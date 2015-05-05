/*
Faça um programa que leia a velocidade máxima permitida em uma
avenida e a velocidade com que o motorista estava dirigindo nela e
calcule a multa que uma pessoa vai receber, sabendo que são pagos: a)
50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade
permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a
56km/h); b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a
velocidade permitida. c) 200 reais, se estiver acima de 31km/h da
velocidade permitida.
*/

#include<stdio.h>

int main(){
    float vmax,vreal,diff,multa=0;
    printf("\nInforme a velocidade maxima permitida: ");
    scanf("%f",&vmax);
    printf("\nInforme a velocidade do carro: ");
    scanf("%f",&vreal);
    diff=vreal-vmax;  // diferença entre a velocidade permitida e a do condutor
    /* se a diferença for negativa significa que a velocidade do contudor
       era menor do que a velocidade maxima permitida
    */
    if(diff>0 && diff<=10.0)
       multa=50.00;
    else if(diff>10.0 && diff<=30)
       multa=100.00;
    else if(diff>30)
       multa=200.00;
    if(multa==0)
        printf("\nVelocidade permitida.");
    else
        printf("\nVelocidade acima da permitida.\nMulta = %.2f",multa);
    return 0;
}

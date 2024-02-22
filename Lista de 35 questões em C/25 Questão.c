/*
Autora: Lanna Feitoza
Enunciado: Prepare um algoritmo que calcule o valor de H, sendo que ele é determinado pela série
H = 1/ 1 + 3/2 + 5/3 + 7/4 + ... + 99/50.
*/

#include <stdio.h>

int main(){

    float H=0, numerador=1, denominador=1;

    while(denominador <= 50){

    H= H + numerador / denominador;

    numerador= numerador + 2;
    denominador++;

    }

    printf("Resultado H= %.2f", H);

}

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
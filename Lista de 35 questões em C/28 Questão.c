/*
Autora: Lanna Feitoza
Enunciado: Construa um algoritmo que calcule o valor dos dez primeiros termos da série H, em que:
H = 1 /pot( 1,3) - 1 /pot(3,3) + 1 /pot(S,3) - 1 /pot(7,3) + 1 /pot(9,3) - ...
*/

#include <stdio.h>
#include <math.h>

int main(){

    float cont=1;
    float soma=0, subtracao=0;

    while(cont <= 19){

        soma = subtracao + 1/pow(cont, 3);

        cont += 2;

        subtracao = soma - 1/pow(cont, 3);

        cont += 2;

    }

    printf("Resultado: %f", subtracao);

}

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

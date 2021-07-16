#include <stdio.h>

int main(){

    float cont=50, cont2=10;
    float soma=0, subtracao=0;

    while((cont <= 250) && (cont2 <= 90)){

        soma = subtracao + 1/cont;
        subtracao = soma - 1/cont2;

        cont += 50;
        cont2 += 20;
    }

    printf("Resultado: %f", subtracao);

}

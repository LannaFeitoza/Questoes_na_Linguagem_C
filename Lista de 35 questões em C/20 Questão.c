/*
Autora: Lanna Feitoza
Enunciado: Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço.
O monge, necessitando de alimentos, perguntou à rainha se o pagamento poderia ser feito
com grãos de trigo dispostos em um tabuleiro de xadrez, de tal forma que o primeiro
quadro contivesse apenas um grão e os quadros subseqüentes, o dobro do quadro anterior.
A rainha considerou o pagamento barato e pediu que o serviço fosse executado, sem se
dar conta de que seria impossível efetuar o pagamento. Faça um algoritmo para calcular o
número de grãos que o monge esperava receber:
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float graos=1;
    int cont;

    for(cont=1; cont<=64; cont++){

        printf("Bloco: %d -> Grão: %.f\n", cont, graos);
        graos=graos*2;

    }

    return 0;

}

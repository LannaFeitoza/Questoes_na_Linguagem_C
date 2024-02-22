/*
Autora: Lanna Feitoza
Enunciado: Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer pre�o.
O monge, necessitando de alimentos, perguntou � rainha se o pagamento poderia ser feito
com gr�os de trigo dispostos em um tabuleiro de xadrez, de tal forma que o primeiro
quadro contivesse apenas um gr�o e os quadros subseq�entes, o dobro do quadro anterior.
A rainha considerou o pagamento barato e pediu que o servi�o fosse executado, sem se
dar conta de que seria imposs�vel efetuar o pagamento. Fa�a um algoritmo para calcular o
n�mero de gr�os que o monge esperava receber:
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float graos=1;
    int cont;

    for(cont=1; cont<=64; cont++){

        printf("Bloco: %d -> Gr�o: %.f\n", cont, graos);
        graos=graos*2;

    }

    return 0;

}

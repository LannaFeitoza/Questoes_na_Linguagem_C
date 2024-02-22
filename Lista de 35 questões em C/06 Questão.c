/*
Autora: Lanna Feitoza
Enunciado: Um dado comerciante maluco cobra 10% de acréscimo para cada prestação em atraso
e depois dá um desconto de 10% sobre esse valor. Faça um algoritmo que solicite o
valor da prestação em atraso e apresente o valor final a pagar, assim como o prejuízo do
comerciante na operação.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float p_atrasada,  p_acrescimo, pagar, prejuizo;

    printf("Digite o valor da prestação atrasada: ");
    scanf("%f", &p_atrasada);

    p_acrescimo= p_atrasada + p_atrasada * 0.1;
    pagar= p_acrescimo - p_acrescimo * 0.1;
    prejuizo= pagar - p_atrasada;

    printf("Valor a pagar:  R$ %.2f \n", pagar);
    printf("Prejuízo: R$ %.2f ", prejuizo);

    return 0;

}

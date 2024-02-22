/*
Autora: Lanna Feitoza
Enunciado: Um dado comerciante maluco cobra 10% de acr�scimo para cada presta��o em atraso
e depois d� um desconto de 10% sobre esse valor. Fa�a um algoritmo que solicite o
valor da presta��o em atraso e apresente o valor final a pagar, assim como o preju�zo do
comerciante na opera��o.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float p_atrasada,  p_acrescimo, pagar, prejuizo;

    printf("Digite o valor da presta��o atrasada: ");
    scanf("%f", &p_atrasada);

    p_acrescimo= p_atrasada + p_atrasada * 0.1;
    pagar= p_acrescimo - p_acrescimo * 0.1;
    prejuizo= pagar - p_atrasada;

    printf("Valor a pagar:  R$ %.2f \n", pagar);
    printf("Preju�zo: R$ %.2f ", prejuizo);

    return 0;

}

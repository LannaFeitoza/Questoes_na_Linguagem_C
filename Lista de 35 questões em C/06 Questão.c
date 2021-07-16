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

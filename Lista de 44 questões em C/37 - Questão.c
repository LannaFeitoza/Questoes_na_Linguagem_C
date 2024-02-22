//Autora: Lanna Feitoza

#include <stdio.h>

#define preco_morango 2.5
#define preco_maca 1.8

int main(){

    int kilo_morango, kilo_maca, kilo_total;
    float valor_final_morango, valor_final_maca, valor_total;

    printf("Digite a quantidade de Kg do morango: ");
    scanf("%d", &kilo_morango);

    printf("Digite a quantidade de Kg da maca: ");
    scanf("%d", &kilo_maca);

    printf("\nValor a pagar: R$ ");

    if(kilo_morango <= 5)
        valor_final_morango= preco_morango * kilo_morango;

    else
        valor_final_morango= (preco_morango - 0.3) * kilo_morango;

    if(kilo_maca <= 5)
        valor_final_maca= preco_maca * kilo_maca;


    else
        valor_final_maca= (preco_maca - 0.3) * kilo_maca;

    kilo_total= kilo_morango + kilo_maca;
    valor_total= valor_final_morango + valor_final_maca;

    if((kilo_total > 8) || (valor_total > 25)){
        valor_total= valor_total - (valor_total * 0.1);

        printf("%.2f", valor_total);
    }

    else{
        printf("%.2f", valor_total);
    }

    return 0;

}



#include <stdio.h>

int main(){

    float valor_1, valor_2;

    printf("Digite um valor 1: ");
    scanf("%f", &valor_1);

    printf("Digite um valor 2: ");
    scanf("%f", &valor_2);

    printf("\nValores em ordem crescente: ");

    if(valor_1 < valor_2)
        printf("%.2f, %.2f", valor_1, valor_2);

    else
        printf("%.2f, %.2f", valor_2, valor_1);

    return 0;

}


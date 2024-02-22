//Autora: Lanna Feitoza

#include <stdio.h>

int main(){

    float valor_1, valor_2;

    printf("Digite um valor 1: ");
    scanf("%f", &valor_1);

    printf("Digite um valor 2: ");
    scanf("%f", &valor_2);

    if(valor_1 > valor_2)
        printf("\nMaior valor: %.2f", valor_1);

    else if(valor_1 < valor_2)
        printf("\nMaior valor: %.2f", valor_2);

    return 0;

}


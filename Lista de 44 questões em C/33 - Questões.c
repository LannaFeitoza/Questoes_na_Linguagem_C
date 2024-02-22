//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float valor_1, valor_2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor_1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor_2);

    if(valor_1 > valor_2)
        printf("Primeiro é maior");

    else if(valor_1 < valor_2)
        printf("Segundo é maior");

    else
        printf("Números iguais");

    return 0;

}

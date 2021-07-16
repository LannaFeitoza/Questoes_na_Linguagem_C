#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float lado_1, lado_2, lado_3;
    float soma_1, soma_2, soma_3;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado_1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado_2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado_3);

    soma_1= lado_1 + lado_2;
    soma_2= lado_1 + lado_3;
    soma_3= lado_2 + lado_3;

    if((lado_3 < soma_1) && (lado_2 < soma_2) && (lado_1 < soma_3))
        printf("\nOs lados formam um triângulo");

    else
        printf("\nOs lados não formam um triângulo");

    return 0;

}

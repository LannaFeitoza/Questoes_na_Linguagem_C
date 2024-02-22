//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main(){

   setlocale(LC_ALL, "Portuguese");

    float numero_1, numero_2, numero_3;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero_1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero_2);

    printf("Digite o terceiro número: ");
    scanf("%f", &numero_3);

    if((numero_1 > numero_2) && (numero_2 > numero_3))
        printf("\nSoma do primeiro número com o segundo: %.2f", numero_1 + numero_2);

    else if((numero_1 > numero_2) && (numero_2 < numero_3))
        printf("\nSoma do primeiro número com o terceiro: %.2f", numero_1 + numero_3);

    else
        printf("\nSoma do segundo número com o terceiro: %.2f", numero_2 + numero_3);

    return 0;

}

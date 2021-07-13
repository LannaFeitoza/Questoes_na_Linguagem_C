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

    if((numero_1 > numero_2) && (numero_1 > numero_3))
        printf("\nO maior número é o primeiro: %.2f", numero_1);

    else if((numero_2 > numero_1) && (numero_2 > numero_3))
        printf("\nO maior número é o segundo: %.2f", numero_2);

    else
        printf("\nO maior numero é o terceiro: %.2f", numero_3);

    return 0;

}

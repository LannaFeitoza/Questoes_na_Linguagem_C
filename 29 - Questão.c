#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numero_1, numero_2, numero_3;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &numero_1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &numero_2);

    printf("Digite o terceiro n�mero: ");
    scanf("%f", &numero_3);

    if((numero_1 > numero_2) && (numero_1 > numero_3))
        printf("\nO maior n�mero � o primeiro: %.2f", numero_1);

    else if((numero_2 > numero_1) && (numero_2 > numero_3))
        printf("\nO maior n�mero � o segundo: %.2f", numero_2);

    else
        printf("\nO maior numero � o terceiro: %.2f", numero_3);

    return 0;

}

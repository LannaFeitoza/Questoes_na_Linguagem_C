#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numero;

    printf("Digite um n�mero: ");
    scanf("%f", &numero);

    if(numero > 0)
        printf("O n�mero � positivo");

    else if(numero < 0)
        printf("O n�mero � negativo");

    else
        printf("O n�mero � igual a zero");

    return 0;

}

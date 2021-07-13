#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if(numero > 0)
        printf("O número é positivo");

    else if(numero < 0)
        printf("O número é negativo");

    else
        printf("O número é igual a zero");

    return 0;

}

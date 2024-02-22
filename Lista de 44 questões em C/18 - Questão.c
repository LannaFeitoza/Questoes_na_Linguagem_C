//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    float numero;

    printf("Digite algum número: ");
    scanf("%f", &numero);

    if(numero >= 0)
        printf("Positivo");

    else
        printf("Negativo");


    return 0;

}

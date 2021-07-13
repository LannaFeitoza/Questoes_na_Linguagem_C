#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float altura, base, area;

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    printf("Digite base do retângulo: ");
    scanf("%f", &base);

    area=altura*base;

    printf("Área do retângulo: %.2f", area);

    return 0;

}

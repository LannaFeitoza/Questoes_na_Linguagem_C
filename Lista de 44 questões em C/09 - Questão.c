#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float altura, base, area;

    printf("Digite a altura do ret�ngulo: ");
    scanf("%f", &altura);

    printf("Digite base do ret�ngulo: ");
    scanf("%f", &base);

    area=altura*base;

    printf("�rea do ret�ngulo: %.2f", area);

    return 0;

}

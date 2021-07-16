#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float raio, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area= 3.14 * pow(raio, 2);

    printf("Área do círculo: %.1f", area);

    return 0;

}

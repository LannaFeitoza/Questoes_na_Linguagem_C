//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float fahrenheit, celsius;

    printf("Escreva a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius= (fahrenheit - 32) * 5 / 9;

    printf("Conversão de Fahrenheit para Celsius: %.2f C", celsius);

    return 0;

}

/*
Autora: Lanna Feitoza
Enunciado: Elabore um algoritmo que calcule a �rea de um c�rculo qualquer de raio fornecido.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float raio, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area= 3.14 * pow(raio, 2);

    printf("�rea do c�rculo: %.1f", area);

    return 0;

}

/*
Autora: Lanna Feitoza
Enunciado: A convers�o de graus Fahrenheit para cent�grados � obtida pela f�rmula C = 5/9(F - 32).
Escreva um algoritmo que calcule e escreva uma tabela de graus cent�grados em fun��o de
graus Fahrenheit que variem de 50 a 150 de 1em 1.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int fahrenheit= 50, C;

    printf("Fahrenheit  para  Cent�grados:\n");

    while(fahrenheit <= 150){

        C= (fahrenheit - 32) * 5 / 9;

        printf("    %dF       =        %dC\n", fahrenheit, C);

        fahrenheit++;


    }

    return 0;

}

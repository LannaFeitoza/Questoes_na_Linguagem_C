/*
Autora: Lanna Feitoza
Enunciado: A conversão de graus Fahrenheit para centígrados é obtida pela fórmula C = 5/9(F - 32).
Escreva um algoritmo que calcule e escreva uma tabela de graus centígrados em função de
graus Fahrenheit que variem de 50 a 150 de 1em 1.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int fahrenheit= 50, C;

    printf("Fahrenheit  para  Centígrados:\n");

    while(fahrenheit <= 150){

        C= (fahrenheit - 32) * 5 / 9;

        printf("    %dF       =        %dC\n", fahrenheit, C);

        fahrenheit++;


    }

    return 0;

}

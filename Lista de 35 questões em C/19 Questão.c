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

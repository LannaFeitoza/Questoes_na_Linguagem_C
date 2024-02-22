/*
Autora: Lanna Feitoza
Enunciado: Faça um algoritmo que seja capaz de obter o resultado de uma exponenciação para
qualquer base e expoente inteiro fornecidos, sem utilizar a operação de exponenciação
(pot).
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, contador= 0, vezes= 0, multi= 1;

    printf("Digite uma base: ");
    scanf("%d", &num1);

    printf("Digite um expoente: ");
    scanf("%d", &num2);

    while(contador <= num2){

        vezes= vezes + num1;
        multi= num1 * multi;
        contador++;

    }

    printf("\nRadiciação de %d elevado a %d: %d", num1, num2, multi / num1);

    return 0;

}

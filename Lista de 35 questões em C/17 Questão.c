/*
Autora: Lanna Feitoza
Enunciado: Construa um algoritmo que gere os 20 primeiros termos de uma série tal qual a de
Fibonacci, mas que cujos 2 primeiros termos são fornecidos pelo usuário.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, contador= 0, fibonacci, soma;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número respeitando a sequência de Fibonacci: ");
    scanf("%d", &num2);

    printf("\nSequência Fibonnaci: \n");
    printf("%d\n", num1);
    printf("%d\n", num2);

    while(contador <= 8){

        fibonacci= num1 + num2;
        printf("%d\n", fibonacci);

        soma = fibonacci  + num2;
        printf("%d\n", soma);

        num1= fibonacci;
        num2= soma;

        contador++;

    }

    return 0;

}

/*
Autora: Lanna Feitoza
Enunciado: Elabore um algoritmo que obtenha o mínimo múltiplo comum (MMC) entre dois números
fornecidos.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, troca, resto;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    if(num1 > num2){
        troca= num1;
        num1= num2;
        num2= troca;
    }

    resto= num2%num1;

    while(num2%num1 != 0){
        resto= num2%num1;
        num2= num1;
        num1= resto;
    }

    printf("MMC: %d", num1);

    return 0;

}

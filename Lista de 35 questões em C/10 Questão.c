/*
Autora: Lanna Feitoza
Enunciado: A partir da idade informada de uma pessoa, elabore um algoritmo que informe a sua classe
eleitoral, sabendo que menores de 16 n�o votam (n�o votante), que o voto � obrigat�rio
para adultos entre 18 e 65 anos (eleitor obrigat�rio) e que o voto � opcional para eleitores
entre 16 e 18, ou maiores de 65 anos ( eleitor facultativo).
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    switch(idade){

        case 1 ... 15:
        printf("N�o votante");
        break;

        case 16 ... 17:
        case 66 ... 100:
        printf("Eleitor facultativo");
        break;

        case 18 ... 65:
        printf("Eleitor obrigat�rio");
        break;

    }

    return 0;

}

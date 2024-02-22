/*
Autora: Lanna Feitoza
Enunciado: Elabore um algoritmo que, a partir de um dia, mês e ano fornecidos, valide se eles
compõem uma data válida. Não deixe de considerar os meses com 30 ou 31 dias, e o
tratamento de ano bissexto.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(ano > 0){
    switch(dia){

        case 31:

        switch(mes){

            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            printf("Data: %d/%d/%d válida!", dia, mes, ano);
            break;

            default:
            printf("Data: %d/%d/%d inválida!", dia, mes, ano);

        }
        break;

        case 30:

        switch(mes){

            case 1:
            case 3 ... 12:
            printf("Data: %d/%d/%d válida!", dia, mes, ano);
            break;

            default:
            printf("Data: %d/%d/%d inválida!", dia, mes, ano);

        }
        break;

        default:
        if((dia > 0) && (dia < 32) && (mes > 0) && (mes < 13))
            printf("Data: %d/%d/%d válida!", dia, mes, ano);

        else
            printf("Data: %d/%d/%d inválida!", dia, mes, ano);

        }
    }

    else{
        printf("Data: %d/%d/%d inválida!", dia, mes, ano);
    }

    return 0;

}

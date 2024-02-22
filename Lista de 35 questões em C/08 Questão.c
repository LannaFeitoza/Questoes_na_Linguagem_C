/*
Autora: Lanna Feitoza
Enunciado: Elabore um algoritmo que, a partir de um dia, m�s e ano fornecidos, valide se eles
comp�em uma data v�lida. N�o deixe de considerar os meses com 30 ou 31 dias, e o
tratamento de ano bissexto.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o m�s: ");
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
            printf("Data: %d/%d/%d v�lida!", dia, mes, ano);
            break;

            default:
            printf("Data: %d/%d/%d inv�lida!", dia, mes, ano);

        }
        break;

        case 30:

        switch(mes){

            case 1:
            case 3 ... 12:
            printf("Data: %d/%d/%d v�lida!", dia, mes, ano);
            break;

            default:
            printf("Data: %d/%d/%d inv�lida!", dia, mes, ano);

        }
        break;

        default:
        if((dia > 0) && (dia < 32) && (mes > 0) && (mes < 13))
            printf("Data: %d/%d/%d v�lida!", dia, mes, ano);

        else
            printf("Data: %d/%d/%d inv�lida!", dia, mes, ano);

        }
    }

    else{
        printf("Data: %d/%d/%d inv�lida!", dia, mes, ano);
    }

    return 0;

}

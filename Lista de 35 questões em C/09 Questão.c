/*
Autora: Lanna Feitoza
Enunciado: Escreva o signo do zodíaco correspondente ao dia e mês informado.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int dia, mes;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    switch(mes){

        case 1:
        switch(dia){

            case 1 ... 19:
            printf("Capricórnio");
            break;

            case 20 ... 31:
            printf("Aquário");
        }
        break;

        case 2:
        switch(dia){

            case 1 ... 18:
            printf("Aquário");
            break;

            case 19 ... 29:
            printf("Peixes");
        }
        break;

        case 3:
        switch(dia){

            case 1 ... 20:
            printf("Peixes");
            break;

            case 21 ... 31:
            printf("Áries");
        }
        break;

        case 4:
        switch(dia){

            case 1 ... 19:
            printf("Áries");
            break;

            case 20 ... 30:
            printf("Touro");
        }
        break;

        case 5:
        switch(dia){

            case 1 ... 20:
            printf("Touro");
            break;

            case 21 ... 31:
            printf("Gêmeos");
        }
        break;

        case 6:
        switch(dia){

            case 1 ... 21:
            printf("Gêmeos");
            break;

            case 22 ... 30:
            printf("Câncer");
        }
        break;

        case 7:
        switch(dia){

            case 1 ... 22:
            printf("Câncer");
            break;

            case 23 ... 31:
            printf("Leão");
        }
        break;

        case 8:
        switch(dia){

            case 1 ... 22:
            printf("Leão");
            break;

            case 23 ... 31:
            printf("Virgem");
        }
        break;

        case 9:
        switch(dia){

            case 1 ... 22:
            printf("Virgem");
            break;

            case 23 ... 30:
            printf("Libra");
        }
        break;

        case 10:
        switch(dia){

            case 1 ... 22:
            printf("Libra");
            break;

            case 23 ... 31:
            printf("Escorpião");
        }
        break;

        case 11:
        switch(dia){

            case 1 ... 21:
            printf("Escorpião");
            break;

            case 22 ... 30:
            printf("Sagitário");
        }
        break;

        case 12:
        switch(dia){

            case 1 ... 21:
            printf("Sagitário");
            break;

            case 22 ... 31:
            printf("Capricórnio");
        }
        break;

    }

    return 0;

}

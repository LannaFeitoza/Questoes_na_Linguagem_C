/*
Autora: Lanna Feitoza
Enunciado: Escreva o signo do zod�aco correspondente ao dia e m�s informado.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int dia, mes;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o m�s: ");
    scanf("%d", &mes);

    switch(mes){

        case 1:
        switch(dia){

            case 1 ... 19:
            printf("Capric�rnio");
            break;

            case 20 ... 31:
            printf("Aqu�rio");
        }
        break;

        case 2:
        switch(dia){

            case 1 ... 18:
            printf("Aqu�rio");
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
            printf("�ries");
        }
        break;

        case 4:
        switch(dia){

            case 1 ... 19:
            printf("�ries");
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
            printf("G�meos");
        }
        break;

        case 6:
        switch(dia){

            case 1 ... 21:
            printf("G�meos");
            break;

            case 22 ... 30:
            printf("C�ncer");
        }
        break;

        case 7:
        switch(dia){

            case 1 ... 22:
            printf("C�ncer");
            break;

            case 23 ... 31:
            printf("Le�o");
        }
        break;

        case 8:
        switch(dia){

            case 1 ... 22:
            printf("Le�o");
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
            printf("Escorpi�o");
        }
        break;

        case 11:
        switch(dia){

            case 1 ... 21:
            printf("Escorpi�o");
            break;

            case 22 ... 30:
            printf("Sagit�rio");
        }
        break;

        case 12:
        switch(dia){

            case 1 ... 21:
            printf("Sagit�rio");
            break;

            case 22 ... 31:
            printf("Capric�rnio");
        }
        break;

    }

    return 0;

}

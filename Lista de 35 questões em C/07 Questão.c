/*
Autora: Lanna Feitoza
Enunciado: Escreva um algoritmo que, a partir de um m�s fornecido (n�mero inteiro de I a 12),
apresente o nome dele por extenso ou uma mensagem de m�s inv�lido.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int mes;

    printf("Digite o n�mero de um m�s: ");
    scanf("%d", &mes);

    switch(mes){

        case 1:
        printf("Janeiro");
        break;

        case 2:
        printf("Fevereiro");
        break;

        case 3:
        printf("Mar�o");
        break;

        case 4:
        printf("Abril");
        break;

        case 5:
        printf("Maio");
        break;

        case 6:
        printf("Junho");
        break;

        case 7:
        printf("Julho");
        break;

        case 8:
        printf("Agosto");
        break;

        case 9:
        printf("Setembro");
        break;

        case 10:
        printf("Outubro");
        break;

        case 11:
        printf("Novembro");
        break;

        case 12:
        printf("Dezembro");
        break;

        default:
        printf("M�s inv�lido");

    }

    return 0;

}

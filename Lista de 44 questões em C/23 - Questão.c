#include <stdio.h>

#define hora_jogada_2 24

int main(){

    int hora_inicial, hora_final, hora_jogada;

    printf("Digite a hora inicial do jogo: ");
    scanf("%d", &hora_inicial);

    printf("Digite a hora final do jogo: ");
    scanf("%d", &hora_final);

    hora_jogada= hora_final - hora_inicial;
    printf("\nTotal de horas jogadas: ");

    if(hora_final > hora_inicial)
        printf("%d", hora_jogada);

    else if(hora_final < hora_inicial)
        printf("%d", hora_jogada + 24);

    else
        printf("%d", hora_jogada_2);

    return 0;

}

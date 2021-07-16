#include <stdio.h>

int main(){

    char time_1 [30], time_2 [30];
    int gol_time_1, gol_time_2;

    printf("Digite o nome do time 1: ");
    gets(time_1);

    printf("Digite o nome do time 2: ");
    gets(time_2);

    printf("\nDigite a quantidade de gols do %s: ", time_1);
    scanf("%d", &gol_time_1);

    printf("Digite a quantidade de gols do %s: ", time_2);
    scanf("%d", &gol_time_2);

    if(gol_time_1 > gol_time_2)
        printf("\nTime vencedor: %s", time_1);

    else if (gol_time_1 < gol_time_2)
        printf("\nTime vencedor: %s", time_2);

    else
        printf("\nEMPATE");

    return 0;

}

/*
Autora: Lanna Feitoza
Enunciado: Construa um algoritmo que seja capaz de dar a classificação olímpica de 3 países
informados. Para cada país é informado o nome, a quantidade de medalhas de ouro, prata
e bronze. Considere que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada
bronze, peso 1 .
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char p1[30], p2[30], p3[30];
    int ouro, prata, bronze, pais1, pais2, pais3;

    printf("Digite o nome do primeiro país: ");
    scanf("%s", p1);

    printf("Digite a quantidade de medalhas de ouro: ");
    scanf("%d", &ouro);

    printf("Digite a quantidade de medalhas de prata: ");
    scanf("%d", &prata);

    printf("Digite a quantidade de medalhas de bronze: ");
    scanf("%d", &bronze);

    pais1= ouro * 3 + prata * 2 + bronze * 1;

    printf("\nDigite o nome do segundo país: ");
    scanf("%s", p2);

    printf("Digite a quantidade de medalhas de ouro: ");
    scanf("%d", &ouro);

    printf("Digite a quantidade de medalhas de prata: ");
    scanf("%d", &prata);

    printf("Digite a quantidade de medalhas de bronze: ");
    scanf("%d", &bronze);

    pais2= ouro * 3 + prata * 2 + bronze * 1;

    printf("\nDigite o nome do terceiro país: ");
    scanf("%s", p3);

    printf("Digite a quantidade de medalhas de ouro: ");
    scanf("%d", &ouro);

    printf("Digite a quantidade de medalhas de prata: ");
    scanf("%d", &prata);

    printf("Digite a quantidade de medalhas de bronze: ");
    scanf("%d", &bronze);

    pais3= ouro * 3 + prata * 2 + bronze * 1;

    if(( pais1 > pais2) && ( pais2 > pais3)){

        printf("\nPrimeiro lugar: %s\nSegundo lugar: %s\nTerceiro lugar: %s\n", p1, p2, p3);

    }

    else if(( pais1 > pais3) && ( pais3 > pais2)){

        printf("\nPrimeiro lugar: %s\nSegundo lugar: %s\nTerceiro lugar: %s\n", p1, p3, p2);

    }

    else if(( pais2 > pais1) && ( pais1 > pais3)){

        printf("\nPrimeiro lugar: %s\nSegundo lugar: %s\nTerceiro lugar: %s\n", p2, p1, p3);

    }

    else if(( pais2 > pais3) && ( pais3 > pais1)){

        printf("\nPrimeiro lugar: %s\nSegundo lugar: %s\nTerceiro lugar: %s\n", p2, p3, p1);

    }

    else if(( pais3 > pais1) && ( pais1 > pais2)){

        printf("\nPrimeiro lugar: %s\nSegundo lugar: %s\nTerceiro lugar: %s\n", p3, p1, p2);

    }

    else if(( pais3 > p2) && ( pais2 > pais1)){

        printf("\nPrimeiro lugar: %s\nSegundo lugar: %s\nTerceiro lugar: %s\n", p3, p2, p1);

    }

    return 0;

}

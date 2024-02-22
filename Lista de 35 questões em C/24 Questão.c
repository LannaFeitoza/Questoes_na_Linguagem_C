/*
Autora: Lanna Feitoza
Enunciado: Construa um algoritmo que leia um conjunto de dados contendo altura e sexo ('M' para
masculino e 'F' para feminino) de 50 pessoas e, depois, calcule e escreva:
• a maior e a menor altura do grupo;
• a média de altura das mulheres;
• o número de homens e a diferença porcentual entre eles e as mulheres.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char sexo[4];
    float alt, alt_F, media, porcM, porcF, maior, menor, dif;
    int total_F= 0, total_M= 0, con, menor_F, maior_F, menor_M, maior_M;


    for(con=1; con <= 50; con++){
        printf("Digite o sexo[F] ou [M]: ");
        scanf("%s", sexo);

        printf("Digite a altura: ");
        scanf("%f", &alt);

        printf("\n");

        if(strcmp(sexo, "F") == 0){
            alt_F= alt + alt_F;

            if(alt > -1){
                if(total_F == 0){
                    maior_F= alt;
                    menor_F= alt;
                }

                if(alt > maior_F)
                    maior_F= alt;
                else if(alt < menor_F)
                    menor_F= alt;
            }
            total_F++;
        }

        else if(strcmp(sexo, "M") == 0){
            if(alt > -1){

                if(total_M == 0){
                    maior_M= alt;
                    menor_M= alt;
                }

                if(alt > maior_M)
                    maior_M= alt;
                else if(alt < menor_M)
                    menor_M= alt;
            }
            total_M++;
        }
    }

    if(maior_M > maior_F)
        maior= maior_M;
    else
        maior= maior_F;

    if(menor_M > menor_F)
        menor= menor_F;
    else
        menor= menor_M;

    media= alt_F/total_F;
    porcF= total_F * 100 / 10;
    porcM= total_M * 100 / 10;

    dif= porcM - porcF;

    if(dif < 0)
        dif= (porcM - porcF) * -1;

    printf("\nMaior altura: %.f\nMenor altura: %.f\n", maior, menor);
    printf("\nMédia da altura das mulheres: %.2f\n", media);
    printf("\nNúmero de homens: %d\n", total_M);
    printf("Diferença porcentual entre os homens e as mulheres: %.1f%%\n", dif);

    return 0;

}

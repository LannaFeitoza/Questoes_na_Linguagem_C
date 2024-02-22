/*
Autora: Lanna Feitoza
Enunciado: Foi realizada uma pesquisa sobre algumas características físicas da população de uma certa
região, a qual coletou os seguintes dados referentes a cada habitante para análise:
• sexo ('M' - masculino ou 'F' - feminino);
• cor dos olhos (W. - azuis, 'V' - verdes ou 'C'- castanhos);
• cor dos cabelos ('L: - loiros, 'C' - castanhos ou 'P'- pretos);
• idade.

Faça um algoritmo que determine e escreva:
• a maior idade dos habitantes;
• a porcentagem entre os indivíduos do sexo masculino, cuja idade está entre 18 e 35
anos, inclusive;
• a porcentagem do total de indivíduos do sexo feminino cuja idade está entre 18 e 35
anos, inclusive, e que tenham olhos verdes e cabelos loiros.

O final do conjunto de habitantes é reconhecido pelo valor -1 entrando como idade.
*/

#include <stdio.h>

int main (){

    int idade=0, total=0, maior_id=0, contM=0, contF=0;
    char sexo[2], olho[2], cabelo[2];
    float porM, porF;

    printf("-> Sexo: M-masculino ou F-feminino\n");
    printf("-> Cor dos olhos: A-azuis, V-verdes ou C-castanho\n");
    printf("-> Cor dos cabelos: L-loiros, C-castanhos ou P-Pretos\n\n");
    printf("Para finalizar o conjunto de habitantes digite -1 na idade.\n\n");

    while(idade != -1){

        printf("Digite o sexo: ");
        scanf("%s", sexo);

        printf("Digite a cor dos olhos: ");
        scanf("%s", olho);

        printf("Digite a cor do cabelo: ");
        scanf("%s", cabelo);

        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("\n");

        if(idade > maior_id)
            maior_id= idade;

        if((18 < idade) && (idade < 35) && strcmp(sexo, "M")==0)
            contM++;

        if((18 < idade) && (idade < 35) && (strcmp(sexo, "F")==0) && (strcmp(olho, "V")==0)  && strcmp(cabelo, "L")==0)
            contF++;

        if(idade != -1)
            if((strcmp(sexo, "M")==0) || strcmp(sexo, "F")==0)
                if((strcmp(olho, "A")==0) || (strcmp(olho, "V")==0) || (strcmp(olho, "C")==0))
                    if((strcmp(cabelo, "L")==0) || (strcmp(cabelo, "C")==0) || strcmp(cabelo, "P")==0)
                        total++;

    }

    porM= contM * 100 / total;
    porF= contF * 100 / total;

    printf("-> Maior idade entre os habitantes: %d.\n", maior_id);
    printf("-> Porcentagem de habitantes do sexo masculino com idade entre 18 e 35 anos: %.f%%\n", porM);
    printf("-> Porcentagem de habitantes do sexo feminino com idade entre 18 e 35 anos, com olhos verdes e cabelos loiros: %.f%%", porF);

    return 0;

}


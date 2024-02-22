/*
Autora: Lanna Feitoza
Enunciado: Realizou-se uma pesquisa para determinar alguns dados estatísticos em relação ao conjunto
de crianças nascidas em um certo período de uma determinada maternidade. Construa um
algoritmo que leia o número de crianças nascidas nesse período e, depois, em um número
indeterminado de vezes, o sexo de um recém-nascido prematuro ('M' - masculino ou
'F' - feminino) e o número de dias que este foi mantido na incubadora.
Como finalizador, teremos a letra 'X' no lugar do sexo da criança.

Determine e imprima:
• a porcentagem de recém-nascidos prematuros;
• a porcentagem de recém-nascidos meninos e meninas do total de prematuros;
• a média de dias de permanência dos recém-nascidos prematuros na incubadora;
• o maior número de dias que um recém-nascido prematuro permaneceu na incubadora;
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

   int nasc, fem=0, mas=0, maior=0, bb=0, dias, t_dias=0;
   float media, porcP, porcM, porcF;
   char sexo[3]= "I";

   printf("Digite a quantidade de nascimentos: ");
   scanf("%d", &nasc);


    while((strcmp(sexo,"X") != 0) && (bb < nasc)){

        printf("\nDigite o sexo do bebê: ");
        scanf("%s", sexo);

        printf("Digite os dias de internação na incubadora: ");
        scanf("%d", &dias);

        if(strcmp(sexo,"F")==0)
            fem++;
        else if(strcmp(sexo,"M")==0)
            mas++;

        if(strcmp(sexo,"X") != 0)
            t_dias = dias + t_dias;

        if((dias > maior) && (strcmp(sexo,"X") != 0))
            maior=dias;

        bb++;
    }

    media = t_dias / (fem + mas);
    porcP= (fem + mas) * 100 / nasc;
    porcM= mas * 100 / nasc;
    porcF= fem * 100 / nasc;

    printf("\n-> Porcentagem de recém-nascidos prematuros: %.f%%\n", porcP);
    printf("-> Porcentagem de recém-nascidos prematuros do sexo feminino: %.f%%\n", porcF);
    printf("-> Porcentagem de recém-nascidos prematuros do sexo masculino: %.f%%\n", porcM);
    printf("-> Média de dias de permanencia dos recém-nascidos prematuros na incubadora: %.f.\n", media);
    printf("-> Maior número de dias que um recém-nascido prematuro permaneceu na incubadora: %d.\n", maior);

    return 0;

}

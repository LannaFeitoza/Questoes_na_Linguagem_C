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

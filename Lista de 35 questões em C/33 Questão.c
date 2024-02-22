/*
Autora: Lanna Feitoza
Enunciado: Realizou-se uma pesquisa para determinar alguns dados estat�sticos em rela��o ao conjunto
de crian�as nascidas em um certo per�odo de uma determinada maternidade. Construa um
algoritmo que leia o n�mero de crian�as nascidas nesse per�odo e, depois, em um n�mero
indeterminado de vezes, o sexo de um rec�m-nascido prematuro ('M' - masculino ou
'F' - feminino) e o n�mero de dias que este foi mantido na incubadora.
Como finalizador, teremos a letra 'X' no lugar do sexo da crian�a.

Determine e imprima:
� a porcentagem de rec�m-nascidos prematuros;
� a porcentagem de rec�m-nascidos meninos e meninas do total de prematuros;
� a m�dia de dias de perman�ncia dos rec�m-nascidos prematuros na incubadora;
� o maior n�mero de dias que um rec�m-nascido prematuro permaneceu na incubadora;
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

        printf("\nDigite o sexo do beb�: ");
        scanf("%s", sexo);

        printf("Digite os dias de interna��o na incubadora: ");
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

    printf("\n-> Porcentagem de rec�m-nascidos prematuros: %.f%%\n", porcP);
    printf("-> Porcentagem de rec�m-nascidos prematuros do sexo feminino: %.f%%\n", porcF);
    printf("-> Porcentagem de rec�m-nascidos prematuros do sexo masculino: %.f%%\n", porcM);
    printf("-> M�dia de dias de permanencia dos rec�m-nascidos prematuros na incubadora: %.f.\n", media);
    printf("-> Maior n�mero de dias que um rec�m-nascido prematuro permaneceu na incubadora: %d.\n", maior);

    return 0;

}

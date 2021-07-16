#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float hora_trabalho, hora_salario, salario, salario_final;
    float hora_trabalhada_extra, hora_extra, acrescimo_salario;

    printf("Digite as horas trabalhadas no mês: ");
    scanf("%f", &hora_trabalho);

    printf("Digite o salário recebido por hora: ");
    scanf("%f", &hora_salario);

    salario= hora_salario * hora_trabalho;
    hora_trabalhada_extra= hora_trabalho - 160;
    hora_extra= hora_salario + hora_salario * 0.5;
    acrescimo_salario= hora_extra * hora_trabalhada_extra;

    printf("\nSalário final: R$ ");

    if(hora_trabalho > 160){
        salario= hora_salario * 160;
        salario_final= salario + acrescimo_salario;
        printf("%.2f", salario_final);
    }

    else
        printf("%.2f", salario);

    return 0;

}

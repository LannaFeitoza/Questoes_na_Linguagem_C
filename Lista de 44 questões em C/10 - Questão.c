//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int ano, mes, dia, idade_em_dias;

    printf("Digite o Ano: ");
    scanf("%d", &ano);

    printf("Digite o Mês: ");
    scanf("%d", &mes);

    printf("Digite o Dia: ");
    scanf("%d", &dia);

    idade_em_dias= ano*365 + mes*30 + dia;

    printf("Idade em dias: %d", idade_em_dias);

    return 0;

}

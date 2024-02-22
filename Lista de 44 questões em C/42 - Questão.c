//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

#define ano_atual 2021
int main(){

    setlocale(LC_ALL, "Portuguese");

    int ano_nascimento, ano_ingresso;
    int numero_empregado, idade, anos_trabalhados;

    printf("Digite o código do empregado: ");
    scanf("%d", &numero_empregado);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano de ingresso na empresa: ");
    scanf("%d", &ano_ingresso);

    idade= ano_atual - ano_nascimento;
    anos_trabalhados= ano_atual - ano_ingresso;

    if(((idade >= 65) && (anos_trabalhados >= 30) ) || ( (idade >= 60) && (anos_trabalhados >= 25)))
        printf("\nRequerer aposentadoria");

    else
        printf("\nNão requerer");

    return 0;

}

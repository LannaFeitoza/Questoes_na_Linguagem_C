#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int ano_nascimento, ano_atual, idade;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade= ano_atual - ano_nascimento;

    if(idade >= 16)
        printf("\nPossui idade para votar!");

    else
        printf("\nNão possui idade para votar!");

    return 0;

}

//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int idade_1_h, idade_2_h;
    int idade_1_m, idade_2_m;
    int soma, multiplicacao;

    printf("Digite a idade do primeiro homem: ");
    scanf("%d", &idade_1_h);

    printf("Digite a idade do segundo homem: ");
    scanf("%d", &idade_2_h);

    printf("\nDigite a idade da primeira mulher: ");
    scanf("%d", &idade_1_m);

    printf("Digite a idade da segunda mulher: ");
    scanf("%d", &idade_2_m);

    if(idade_1_h > idade_2_h){
        if(idade_1_m < idade_2_m){
            soma= idade_1_h + idade_1_m;
            multiplicacao= idade_2_h * idade_2_m;
        }

        else{
            soma= idade_1_h + idade_2_m;
            multiplicacao= idade_2_h * idade_1_m;
        }
    }

    else{
        if(idade_1_m < idade_2_m){
            soma= idade_2_h + idade_1_m;
            multiplicacao= idade_1_h * idade_2_m;
        }

        else{
            soma= idade_2_h + idade_2_m;
            multiplicacao= idade_1_h * idade_1_m;
        }
    }

    printf("\nSoma da idade do homem mais velho com a mulher mais nova: %d\n", soma);
    printf("Multiplicação da idade do homem mais novo com a mulher mais velha: %d", multiplicacao);

    return 0;

}

//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int carros, vendas;
    float salario, comissao, salario_final;

    printf("Digite a quantidade de carros vendidos: ");
    scanf("%d", &carros);

    printf("Digite o valor total de vendas: ");
    scanf("%d", &vendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salario);

    printf("Digite o valor recebido por carro vendido: ");
    scanf("%f", &comissao);

    salario_final= salario + comissao * carros  + vendas * 0.05;

    printf("\nSalário final: R$ %.2f", salario_final);

    return 0;

}

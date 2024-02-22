//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float salario, vendas, comissao_1, comissao_2, salario_final;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("Digite o valor das vendas: ");
    scanf("%f", &vendas);

    comissao_1= vendas + vendas * 0.3;
    comissao_2= comissao_1 + (vendas - 1500) + (vendas - 1500) * 0.5;

    if(vendas <=  1500)
        salario_final= salario + comissao_1;

    else
        salario_final= salario + comissao_2;

    printf("\nSalário final: R$ %.2f", salario_final);

    return 0;

}

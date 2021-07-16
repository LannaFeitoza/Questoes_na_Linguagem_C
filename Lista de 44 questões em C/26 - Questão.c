#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero_da_conta;
    float saldo, debito, credito, saldo_atual;

    printf("Digite o número da conta: ");
    scanf("%d", &numero_da_conta);

    printf("Digite o valor do saldo: ");
    scanf("%f", &saldo);

    printf("Digite o valor do débito: ");
    scanf("%f", &debito);

    printf("Digite o valor do crédito: ");
    scanf("%f", &credito);

    saldo_atual= saldo - debito + credito;

    if(saldo_atual >=0)
        printf("Saldo Positivo: R$ %.2f", saldo_atual);

    else
        printf("Saldo negativo: R$  %.2f", saldo_atual);

    return 0;

}

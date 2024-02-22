//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char produto[10];
    int qtd_adquirida;
    float preco, desconto, total, total_pagar;

    printf("Digite o nome do produto: ");
    scanf("%s", &produto);

    printf("Digite a quantidade adquirida: ");
    scanf("%d", &qtd_adquirida);

    printf("Digite o preço por unidade: ");
    scanf("%f", &preco);

    if(qtd_adquirida <= 5)
        desconto= 0.02;

    else if((qtd_adquirida > 5) && (qtd_adquirida <= 10))
        desconto= 0.03;

    else if(qtd_adquirida > 10)
        desconto= 0.05;

    total= qtd_adquirida * preco;
    desconto= total * desconto;
    total_pagar= total - desconto;

    printf("\nProduto: %s\n", produto);
    printf("Total: R$ %.2f\n", total);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Total a pagar: R$ %.2f", total_pagar);

    return 0;

}

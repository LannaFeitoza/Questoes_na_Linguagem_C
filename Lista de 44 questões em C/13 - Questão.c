//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

     float custo_de_fabrica, fornecedor_imposto, distribuidor_imposto, custo_final;

     printf("Digite o custo de fábrica do carro: ");
     scanf("%f", &custo_de_fabrica);

     fornecedor_imposto= custo_de_fabrica + custo_de_fabrica * 0.45;
     distribuidor_imposto=  custo_de_fabrica + custo_de_fabrica * 0.28;
     custo_final= fornecedor_imposto + distribuidor_imposto;

     printf("Custo final do carro: R$ %.2f", custo_final);

     return 0;

}

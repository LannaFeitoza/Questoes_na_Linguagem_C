//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

     float salario, reajuste, salario_com_reajuste;

     printf("Digite seu sal�rio: ");
     scanf("%f", &salario);

     printf("Digite seu percentual de reajuste: ");
     scanf("%f", &reajuste);

     salario_com_reajuste= salario * reajuste / 100 + salario;

     printf("\nSal�rio com percentual de reajuste: R$ %.2f ", salario_com_reajuste);

     return 0;

}

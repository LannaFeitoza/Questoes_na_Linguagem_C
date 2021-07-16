#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char cpf[15];
    int dependentes, cont=1;
    float renda;

    for(cont; cont <= 10; cont++){
        printf("Digite seu CPF: ");
        scanf("%s", cpf);

        printf("Digite o número de dependentes: ");
        scanf("%d", &dependentes);

        printf("Digite sua renda mensal: ");
        scanf("%f", &renda);

        if(dependentes > 0)
            renda= renda - renda * 0.05 * dependentes;

        if((renda <= 1.100) && renda < 2.200)
            renda +=0;
        else if((2.200 <= renda) && renda < 3.300)
            renda= renda + renda * 0.05;
        else if((3.300 <= renda) && renda < 5.500)
            renda= renda + renda * 0.1;
        else if((5.500 <= renda) && renda <= 7.700)
            renda= renda + renda * 0.15;
        else if(7.700 < renda)
            renda = renda - renda * 0.2;

        printf("\nCPF: %s\n", cpf);
        printf("Dependentes: %d\n", dependentes);
        printf("Renda mensal com alíquota: %.3f\n", renda);
        printf("\n");

    }

    return 0;

}

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int N1, N2, divisor, qtd_divisores;

    printf("Insira um n�mero: ");
    scanf("%d", &N1);

    printf("Insira outro n�mero: ");
    scanf("%d", &N2);

    printf("N�meros primos: ");


    for(N1; N1 <= N2; N1++){

        qtd_divisores= 0;

        for(divisor = 1; divisor <= N1; divisor++){

            if((N1 % divisor ) == 0){
            qtd_divisores++;
            }

        }

        if(qtd_divisores == 2){
            printf("%d\n", N1);

        }
    }

    return 0;

}

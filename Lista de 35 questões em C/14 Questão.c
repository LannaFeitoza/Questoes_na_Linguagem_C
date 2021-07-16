#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, troca;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    while(num2 != 0){

        troca= num2;
        num2= num1%num2;
        num1= troca;
    }

    printf("MDC: %d", num1);

    return 0;

}

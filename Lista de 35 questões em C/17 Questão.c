#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, contador= 0, fibonacci, soma;

    printf("Digite um n�mero: ");
    scanf("%d", &num1);

    printf("Digite outro n�mero respeitando a sequ�ncia de Fibonacci: ");
    scanf("%d", &num2);

    printf("\nSequ�ncia Fibonnaci: \n");
    printf("%d\n", num1);
    printf("%d\n", num2);

    while(contador <= 8){

        fibonacci= num1 + num2;
        printf("%d\n", fibonacci);

        soma = fibonacci  + num2;
        printf("%d\n", soma);

        num1= fibonacci;
        num2= soma;

        contador++;

    }

    return 0;

}

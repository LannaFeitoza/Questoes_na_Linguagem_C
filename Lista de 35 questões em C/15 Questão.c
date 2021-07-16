#include <stdio.h>

int main(){

    int num1, num2, contador= 0, vezes= 0;

    printf("Digite um numerador ");
    scanf("%d", &num1);

    printf("Digite um denominador: ");
    scanf("%d", &num2);

    while(vezes <= num1){

        vezes= vezes + num2;
        contador++;

    }

    printf("\nQuociente de %d por %d: %d", num1, num2, contador - 1);

    return 0;

}

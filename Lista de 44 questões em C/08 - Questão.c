#include <stdio.h>

int main(){
    //Nesta quest�o podemos resolver de tr�s formas diferentes!
    //Primeira forma de resolver:
    int valor;

    printf("Escreva um valor: ");
    scanf("%d", &valor);

    valor--;
    printf("Antecessor do valor: %d\n\n", valor);

    //Segunda forma de resolver:
    printf("Escreva um valor: ");
    scanf("%d", &valor);

    valor= valor - 1;
    printf("Antecessor do valor: %d\n\n", valor);

    //Terceira forma de resolver:
    printf("Escreva um valor: ");
    scanf("%d", &valor);

    valor -= 1;
    printf("Antecessor do valor: %d", valor);

    return 0;

}

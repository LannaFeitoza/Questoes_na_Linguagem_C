#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    int macas;
    float valor;

    printf ("Quantidade de maçãs: ");
    scanf ("%d", &macas);

    if(macas < 12)
        valor= macas * 1.3;

    else
        valor= macas;

     printf("Valor: R$ %.2f", valor);

    return 0;

}

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if(valor > 10)
        printf("É MAIOR QUE 10!");

    else
        printf("NÃO É MAIOR QUE 10!");


    return 0;

}

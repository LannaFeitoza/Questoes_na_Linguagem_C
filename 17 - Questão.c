#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if(valor > 10)
        printf("� MAIOR QUE 10!");

    else
        printf("N�O � MAIOR QUE 10!");


    return 0;

}

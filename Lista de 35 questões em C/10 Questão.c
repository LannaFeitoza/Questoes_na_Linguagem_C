#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    switch(idade){

        case 1 ... 15:
        printf("N�o votante");
        break;

        case 16 ... 17:
        case 66 ... 100:
        printf("Eleitor facultativo");
        break;

        case 18 ... 65:
        printf("Eleitor obrigat�rio");
        break;

    }

    return 0;

}

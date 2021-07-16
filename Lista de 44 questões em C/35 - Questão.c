#include <stdio.h>
#include <locale.h>

#define desconto_A_1 2.813
#define desconto_A_2 2.755
#define desconto_G_1 3.168
#define desconto_G_2 3.102

int main(){

    setlocale(LC_ALL, "Portuguese");

    int litro, a, g;
    float preco_final_1, preco_final_2;
    char combustivel[2];

    printf("Código dos combustíveis: A-Álcool, G-Gasolina\n");

    printf("\nDigite o código do combustível: ");
    scanf("%s", combustivel);

    printf("Digite a quantidade de litros: ");
    scanf("%d", &litro);

    if( strcmp (combustivel, "A") == 0){
        a= litro;
        printf("\nPreço a pagar do álcool: R$ ");

        if(a <= 20){
            preco_final_1= desconto_A_1 * a;
            printf("%.2f", preco_final_1);
        }

        else{
            preco_final_2= desconto_A_2 * a;
            printf("%.2f", preco_final_2);
        }
    }

    else if(strcmp (combustivel, "G") == 0){
        g= litro;
        printf("\nPreço a pagar da gasolina: R$ ");

        if(g <= 20){
            preco_final_1= desconto_G_1 * g;
            printf("%.2f", preco_final_1);
        }

        else{
            preco_final_2= desconto_G_2 * g;
            printf("%.2f", preco_final_2);
        }
    }

    return 0;

}

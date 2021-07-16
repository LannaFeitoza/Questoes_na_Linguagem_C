#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int estoque_atual, estoque_maximo, estoque_minimo, quantidade_media;

    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &estoque_atual);

    printf("Digite a quantidade máxima em estoque: ");
    scanf("%d", &estoque_maximo);

    printf("Digite a quantidade mínima em estoque: ");
    scanf("%d", &estoque_minimo);

    quantidade_media= (estoque_maximo + estoque_minimo)/2;

    if(estoque_atual >= quantidade_media)
        printf("\nNão efetuar compra");

    else
        printf("\nEfetuar compra");

    return 0;

}

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float nota_1, nota_2, nota_3;
    float media_exercicio, media_aproveitamento;

    printf("Digite a nota 1: ");
    scanf("%f", &nota_1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota_2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota_3);

    printf("Digite a média dos exercícios: ");
    scanf("%f", &media_exercicio);

    media_aproveitamento= (nota_1 + nota_2*2 + nota_3*3 + media_exercicio) / 7;
    printf("\nMédia de aproveitamento: %.2f\n", media_aproveitamento);

    if(media_aproveitamento >= 9)
        printf("Conceito: A");

    else if((media_aproveitamento >= 7.5) && (media_aproveitamento < 9))
        printf("Conceito: B");

    else if((media_aproveitamento >= 6) && (media_aproveitamento < 7.5))
        printf("Conceito: C");

   else if(media_aproveitamento < 6)
        printf("Conceito: D");

    return 0;

}

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, nota5, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    printf("Digite a nota 5: ");
    scanf("%f", &nota5);

    media= (nota1*1 + nota2*2 + nota3*3 + nota4*4 + nota5*5)/15;

    printf("\nMédia ponderada: %.1f\n", media);

    return 0;

}

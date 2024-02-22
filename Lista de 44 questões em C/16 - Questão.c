//Autora: Lanna Feitoza

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media_final;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media_final= (nota1*2 + nota2*3 + nota3*5) / 10;

    printf("\nMédia Final: %.2f", media_final);

    return 0;

}

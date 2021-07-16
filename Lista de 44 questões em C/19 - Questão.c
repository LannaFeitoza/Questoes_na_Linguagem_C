#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media_do_aluno;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media_do_aluno= (nota1 + nota2) / 2;

    printf("\nMédia do aluno: %.1f\n", media_do_aluno);

    if(media_do_aluno >= 6)
        printf("Aluno aprovado!");

    else
        printf("Aluno reprovado!");


    return 0;

}

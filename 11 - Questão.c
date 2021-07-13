#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int eleitores, voto_branco, voto_nulo, voto_valido;

    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &eleitores);

    printf("Digite a quantidade de votos brancos: ");
    scanf("%d", &voto_branco);

    printf("Digite a quantidade de votos nulos: ");
    scanf("%d", &voto_nulo);

    printf("Digite a quantidade de votos válidos: ");
    scanf("%d", &voto_valido);

    float porcentagem_voto_branco= voto_branco * 100 /eleitores;
    float porcentagem_voto_nulo= voto_nulo * 100 /eleitores;
    float porcentagem_voto_valido= voto_valido * 100 /eleitores;

    printf("\nPorcentagem de votos brancos: %.1f%%\n", porcentagem_voto_branco);
    printf("Porcentagem de votos nulos: %.1f%%\n", porcentagem_voto_nulo);
    printf("Porcentagem de votos válidos: %.1f%%", porcentagem_voto_valido);

    return 0;

}

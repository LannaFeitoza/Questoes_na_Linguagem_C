/*
Autora: Lanna Feitoza
Enunciado: Em uma eleição presidencial existem quatro candidatos. Os votos são informados por
código. Os dados utilizados para a escrutinagem obedecem à seguinte codificação:
• 1,2,3,4 = voto para os respectivos candidatos;
• 5 = voto nulo;
• 6 = voto em branco.

Elabore um algoritmo que calcule e escreva:
• o total de votos para cada candidato e seu percentual sobre o total;
• o total de votos nulos e seu porcentual sobre o total;
• o total de votos em branco e seu percentual sobre o total.
Como finalizador do conjunto de votos, tem-se o valor O.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int v1=0, v2=0, v3=0, v4=0, nulo=0, branco=0, total=0, receptor;
    float percent;

    printf("Opções:\n\n->1,2,3,4 = voto para os respectivos candidatos;");
    printf("\n->5 = voto nulo;\n->6 = voto em branco;\n->0 = Terminar votação.\n\n");

    while(receptor != 0){

        printf("Digite o número do candidato: ");
        scanf("%d", &receptor);

        switch(receptor){

            case 1:
            v1++;
            break;

            case 2:
            v2++;
            break;

            case 3:
            v3++;
            break;

            case 4:
            v4++;
            break;

            case 5:
            nulo++;
            break;

            case 6:
            branco++;
            break;

            case 0:
            total--;
            break;

        }
        total++;
    }

    percent= (v1 * 100) / total;
    printf("\nCandidato 1:\nVotos: %d\nPorcentual sobre o total: %.f %%\n", v1, percent);

    percent= (v2 * 100) / total;
    printf("\nCandidato 2:\nVotos: %d\nPorcentual sobre o total: %.f %%\n", v2, percent);

    percent= (v3 * 100) / total;
    printf("\nCandidato 3:\nVotos: %d\nPorcentual sobre o total: %.f %%\n", v3, percent);

    percent= (v4 * 100) / total;
    printf("\nCandidato 4:\nVotos: %d\nPorcentual sobre o total: %.f %%\n", v4, percent);

    percent= (nulo * 100) / total;
    printf("\nNulo:\nVotos: %d\nPorcentual sobre o total: %.f %%\n", nulo, percent);

    percent= (branco * 100) / total;
    printf("\nBranco:\nVotos: %d\nPorcentual sobre o total: %.f %%\n", branco, percent);

    return 0;

}

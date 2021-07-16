#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int otimo=0, bom=0, regular=0, ruim=0, pessimo=0, con,  dif_OR;
    int maior_ot_id=0, soma_ru_id=0, idade, maior_ru_id=0, maior_pe_id=0;
    char nota[2];
    float dif_BR, por_pe;

    for(con=0; con < 100; con++){

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite a nota do filme: ");
        scanf("%s", nota);
        printf("\n");

        if(strcmp(nota, "A") == 0){
            otimo++;

            if(idade > maior_ot_id)
                maior_ot_id= idade;
        }

        if(strcmp(nota, "B") == 0)
            bom++;

        if(strcmp(nota, "C") == 0)
            regular++;

        if(strcmp(nota, "D") == 0){
            ruim++;
            soma_ru_id += idade;

            if(idade > maior_ru_id)
                maior_ru_id= idade;
        }

        if(strcmp(nota, "E") == 0){
            pessimo++;

            if(idade > maior_pe_id)
                maior_pe_id= idade;
        }

    }

    dif_OR= maior_ru_id - maior_ot_id;
    if(dif_OR < 0)
        dif_OR *= -1;

    dif_BR= (bom - regular) * 100 / con;
    if(dif_BR < 0)
        dif_BR *= -1;

    por_pe= pessimo * 100 / con;

    printf("\n-> Quantidade de respostas Ótimo: %d.\n", otimo);
    printf("-> Diferença porcentual entre respostas Bom e Regular: %.f%%.\n", dif_BR);
    printf("-> Média da idade das pessoas que responderam Ruim: %d.\n", soma_ru_id / ruim);
    printf("-> Porcentagem de respostas Péssimo: %.f%%. Maior idade que respondeu Péssimo: %d.\n", por_pe, maior_pe_id);
    printf("-> Diferença entre a maior idade que respondeu Ótimo e a maior idade que respondeu Ruim: %d.", dif_OR);

    return 0;

}

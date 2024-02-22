/*
Autora: Lanna Feitoza
Enunciado: Uma agência de publicidade quer prestar serviços somente para as maiores companhias
- em número de funcionários - em cada uma das classificações: grande, média, pequena
e microempresa. Para tal, consegue um conjunto de dados com o código, o número de
funcionários e o porte da empresa. Construa um algoritmo que liste o código da empresa
com maiores recursos humanos dentro de sua categoria. Utilize como finalizador o código
de empresa igual a O.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char codigo[20]="Não Informado", categoria[20]="Não Informado", codG[20]="Não Informado";
    char codMd[20]="Não Informado", codP[20]="Não Informado", codMc[20]="Não Informado";
    int maior_funcG=0, maior_funcMd=0, maior_funcP=0, maior_funcMc=0, n_func;

    printf("Categoria das empresas:\n->Grande\n->Media\n->Pequena\n->Microempresa\n\n");
    printf("Para finalizar digite 0 no código da empresa.\n\n");

    while(strcmp(codigo, "0") != 0){

        printf("Digite o código da empresa: ");
        scanf("%s", codigo);

        if(strcmp(codigo, "0") != 0){
            printf("Digite a categoria da empresa: ");
            scanf("%s", categoria);

            printf("Digite a quantidade de funcionarios: ");
            scanf("%d", &n_func);
            printf("\n");

            if(strcmp(categoria, "Grande") == 0){
                if(n_func > maior_funcG){
                    maior_funcG= n_func;
                    strcpy(codG, codigo);
                }
            }

            if(strcmp(categoria, "Media") == 0){
                if(n_func > maior_funcMd){
                    maior_funcMd= n_func;
                    strcpy(codMd, codigo);
                }
            }

            if(strcmp(categoria, "Pequena") == 0){
                if(n_func > maior_funcP){
                    maior_funcP= n_func;
                    strcpy(codP, codigo);
                }
            }

            if(strcmp(categoria, "Microempresa") == 0){
                if(n_func > maior_funcMc){
                    maior_funcMc= n_func;
                    strcpy(codMc, codigo);
                }
            }
        }
    }

    printf("\n->Categoria: Grande\n");
    printf("Código da empresa: %s\n", codG);

    printf("\n->Categoria: Média\n");
    printf("Código da empresa: %s\n", codMd);

    printf("\n->Categoria: Pequena\n");
    printf("Código da empresa: %s\n", codP);

    printf("\n->Categoria: Microempresa\n");
    printf("Código da empresa: %s", codMc);

    return 0;

}

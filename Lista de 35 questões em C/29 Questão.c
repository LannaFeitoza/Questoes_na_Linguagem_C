/*
Autora: Lanna Feitoza
Enunciado: Uma ag�ncia de publicidade quer prestar servi�os somente para as maiores companhias
- em n�mero de funcion�rios - em cada uma das classifica��es: grande, m�dia, pequena
e microempresa. Para tal, consegue um conjunto de dados com o c�digo, o n�mero de
funcion�rios e o porte da empresa. Construa um algoritmo que liste o c�digo da empresa
com maiores recursos humanos dentro de sua categoria. Utilize como finalizador o c�digo
de empresa igual a O.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char codigo[20]="N�o Informado", categoria[20]="N�o Informado", codG[20]="N�o Informado";
    char codMd[20]="N�o Informado", codP[20]="N�o Informado", codMc[20]="N�o Informado";
    int maior_funcG=0, maior_funcMd=0, maior_funcP=0, maior_funcMc=0, n_func;

    printf("Categoria das empresas:\n->Grande\n->Media\n->Pequena\n->Microempresa\n\n");
    printf("Para finalizar digite 0 no c�digo da empresa.\n\n");

    while(strcmp(codigo, "0") != 0){

        printf("Digite o c�digo da empresa: ");
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
    printf("C�digo da empresa: %s\n", codG);

    printf("\n->Categoria: M�dia\n");
    printf("C�digo da empresa: %s\n", codMd);

    printf("\n->Categoria: Pequena\n");
    printf("C�digo da empresa: %s\n", codP);

    printf("\n->Categoria: Microempresa\n");
    printf("C�digo da empresa: %s", codMc);

    return 0;

}

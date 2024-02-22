/*
Autora: Lanna Feitoza
Enunciado: Construa um algoritmo que seja capaz de concluir qual dentre os seguintes animais foi
escolhido, atrav�s de perguntas e respostas. Animais poss�veis: le�o, cavalo, homem,
macaco, morcego, baleia, avestruz, ping�im, pato, �guia, tartaruga, crocodilo e cobra.
(Exemplo no pdf!)
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char resposta[5];

    printf("O animal � mam�fero?\nR: ");
    scanf("%s", resposta);

    if(strcmp (resposta, "Sim") == 0){

        printf("\n� quadr�pede?\nR: ");
        scanf("%s", resposta);

        if(strcmp (resposta, "Sim") == 0){
            printf("\n� carn�voro?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\nO animal � um Le�o.");
            }

            else{
                printf("\n� Herb�voro?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0)
                    printf("\nO animal � um Cavalo.");

                else
                    printf("\nTente novamente!");
            }
        }

        else if(strcmp (resposta, "Sim") != 0){
            printf("\n� b�pede?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\n� on�voro?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                printf("\nO animal � um Homem.");
                }

                else{
                    printf("\n� frut�voro?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal � um Macaco.");

                    else
                        printf("\nTente novamente!");
                }
            }

            else if(strcmp (resposta, "Sim") != 0){
                printf("\n� voador?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                    printf("\nO animal � um Morcego.");
                }

                else if(strcmp (resposta, "Sim") != 0){
                    printf("\n� aqu�tico?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal � uma Baleia.");

                    else
                        printf("\nTente novamente!");
                }
            }
        }
    } // fim mamiferos

    else if (strcmp (resposta, "Sim") != 0){

        printf("\nO animal � uma ave?\nR: ");
        scanf("%s", resposta);

        if(strcmp (resposta, "Sim") == 0){
            printf("\n� n�o-voador?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\n� tropical?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                    printf("\nO animal � um Avestruz.");
                }

                else{
                    printf("\n� polar?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal � um Pinguim.");

                    else
                        printf("\nTente novamente!");
            }
        }

            else if(strcmp (resposta, "Sim") != 0){
                printf("\n� nadador?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                     printf("\nO animal � um pato.");
                }

                else if(strcmp (resposta, "Sim") != 0){
                    printf("\n� de rapina?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal � uma �guia.");

                    else
                        printf("\nTente novamente!");
                }
            }
        }

        else{
            printf("\nO animal � um r�ptil?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\nTem casco?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                     printf("\nO animal � uma Tartaruga.");
                }

                else if(strcmp (resposta, "Sim") != 0){
                    printf("\n� carn�voro?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0){
                        printf("\nO animal � um Crocodilo.");
                    }

                    else if(strcmp (resposta, "Sim") != 0){
                        printf("\nSem patas?\nR: ");
                        scanf("%s", resposta);

                        if(strcmp (resposta, "Sim") == 0)
                            printf("\nO animal � uma Cobra.");

                        else
                            printf("\nTente novamente!");
                    }
                }
            }
            else{
                printf("Tente novamente!");
            }
        }
    }

    return 0;

}

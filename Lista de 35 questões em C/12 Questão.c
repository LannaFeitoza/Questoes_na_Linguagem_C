#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char resposta[5];

    printf("O animal È mamÌfero?\nR: ");
    scanf("%s", resposta);

    if(strcmp (resposta, "Sim") == 0){

        printf("\n… quadr˙pede?\nR: ");
        scanf("%s", resposta);

        if(strcmp (resposta, "Sim") == 0){
            printf("\n… carnÌvoro?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\nO animal È um Le„o.");
            }

            else{
                printf("\n… HerbÌvoro?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0)
                    printf("\nO animal È um Cavalo.");

                else
                    printf("\nTente novamente!");
            }
        }

        else if(strcmp (resposta, "Sim") != 0){
            printf("\n… bÌpede?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\n… onÌvoro?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                printf("\nO animal È um Homem.");
                }

                else{
                    printf("\n… frutÌvoro?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal È um Macaco.");

                    else
                        printf("\nTente novamente!");
                }
            }

            else if(strcmp (resposta, "Sim") != 0){
                printf("\n… voador?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                    printf("\nO animal È um Morcego.");
                }

                else if(strcmp (resposta, "Sim") != 0){
                    printf("\n… aqu·tico?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal È uma Baleia.");

                    else
                        printf("\nTente novamente!");
                }
            }
        }
    } // fim mamiferos

    else if (strcmp (resposta, "Sim") != 0){

        printf("\nO animal È uma ave?\nR: ");
        scanf("%s", resposta);

        if(strcmp (resposta, "Sim") == 0){
            printf("\n… n„o-voador?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\n… tropical?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                    printf("\nO animal È um Avestruz.");
                }

                else{
                    printf("\n… polar?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal È um Pinguim.");

                    else
                        printf("\nTente novamente!");
            }
        }

            else if(strcmp (resposta, "Sim") != 0){
                printf("\n… nadador?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                     printf("\nO animal È um pato.");
                }

                else if(strcmp (resposta, "Sim") != 0){
                    printf("\n… de rapina?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal È uma ¡guia.");

                    else
                        printf("\nTente novamente!");
                }
            }
        }

        else{
            printf("\nO animal È um rÈptil?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\nTem casco?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                     printf("\nO animal È uma Tartaruga.");
                }

                else if(strcmp (resposta, "Sim") != 0){
                    printf("\n… carnÌvoro?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0){
                        printf("\nO animal È um Crocodilo.");
                    }

                    else if(strcmp (resposta, "Sim") != 0){
                        printf("\nSem patas?\nR: ");
                        scanf("%s", resposta);

                        if(strcmp (resposta, "Sim") == 0)
                            printf("\nO animal È uma Cobra.");

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

/*
Autora: Lanna Feitoza
Enunciado: Construa um algoritmo que seja capaz de concluir qual dentre os seguintes animais foi
escolhido, através de perguntas e respostas. Animais possíveis: leão, cavalo, homem,
macaco, morcego, baleia, avestruz, pingüim, pato, águia, tartaruga, crocodilo e cobra.
(Exemplo no pdf!)
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char resposta[5];

    printf("O animal é mamífero?\nR: ");
    scanf("%s", resposta);

    if(strcmp (resposta, "Sim") == 0){

        printf("\nÉ quadrúpede?\nR: ");
        scanf("%s", resposta);

        if(strcmp (resposta, "Sim") == 0){
            printf("\nÉ carnívoro?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\nO animal é um Leão.");
            }

            else{
                printf("\nÉ Herbívoro?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0)
                    printf("\nO animal é um Cavalo.");

                else
                    printf("\nTente novamente!");
            }
        }

        else if(strcmp (resposta, "Sim") != 0){
            printf("\nÉ bípede?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\nÉ onívoro?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                printf("\nO animal é um Homem.");
                }

                else{
                    printf("\nÉ frutívoro?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal é um Macaco.");

                    else
                        printf("\nTente novamente!");
                }
            }

            else if(strcmp (resposta, "Sim") != 0){
                printf("\nÉ voador?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                    printf("\nO animal é um Morcego.");
                }

                else if(strcmp (resposta, "Sim") != 0){
                    printf("\nÉ aquático?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal é uma Baleia.");

                    else
                        printf("\nTente novamente!");
                }
            }
        }
    } // fim mamiferos

    else if (strcmp (resposta, "Sim") != 0){

        printf("\nO animal é uma ave?\nR: ");
        scanf("%s", resposta);

        if(strcmp (resposta, "Sim") == 0){
            printf("\nÉ não-voador?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\nÉ tropical?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                    printf("\nO animal é um Avestruz.");
                }

                else{
                    printf("\nÉ polar?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal é um Pinguim.");

                    else
                        printf("\nTente novamente!");
            }
        }

            else if(strcmp (resposta, "Sim") != 0){
                printf("\nÉ nadador?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                     printf("\nO animal é um pato.");
                }

                else if(strcmp (resposta, "Sim") != 0){
                    printf("\nÉ de rapina?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0)
                        printf("\nO animal é uma Águia.");

                    else
                        printf("\nTente novamente!");
                }
            }
        }

        else{
            printf("\nO animal é um réptil?\nR: ");
            scanf("%s", resposta);

            if(strcmp (resposta, "Sim") == 0){
                printf("\nTem casco?\nR: ");
                scanf("%s", resposta);

                if(strcmp (resposta, "Sim") == 0){
                     printf("\nO animal é uma Tartaruga.");
                }

                else if(strcmp (resposta, "Sim") != 0){
                    printf("\nÉ carnívoro?\nR: ");
                    scanf("%s", resposta);

                    if(strcmp (resposta, "Sim") == 0){
                        printf("\nO animal é um Crocodilo.");
                    }

                    else if(strcmp (resposta, "Sim") != 0){
                        printf("\nSem patas?\nR: ");
                        scanf("%s", resposta);

                        if(strcmp (resposta, "Sim") == 0)
                            printf("\nO animal é uma Cobra.");

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

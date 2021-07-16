#include <stdio.h>
#include <string.h>

int main(){

    float x, y, z;
    char resposta[2];

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    z= x*y + 5;

    if(z <= 0){
        strcpy(resposta, "A");
    }

    else{
        if(z <= 100){
           strcpy(resposta, "B");
        }

        else{
            strcpy(resposta, "C");
        }
    }

    printf("\nValor de z: %.2f\nResposta: %s", z, resposta);

    return 0;

}


/*
Autora: Lanna Feitoza
Enunciado: Construa um algoritmo que, dado um conjunto de valores inteiros e positivos, determine
qual o menor e o maior valor do conjunto. O final do conjunto de valores � conhecido pelo
valor -1, que n�o deve ser considerado.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num= 0, maior=0, menor=0, con=0;

    while(num != -1){

        printf("Digite um n�mero: ");
        scanf("%d", &num);

        if(num > -1){

            if(con == 0){
            maior= num;
            menor= num;

            con++;
            }

            if(num > maior)
                maior= num;

            if(num < menor)
                menor= num;

        }
    }

    printf("\nMaior n�mero do conjunto: %d\n", maior);
    printf("Menor n�mero do conjunto: %d", menor);

    return 0;

}


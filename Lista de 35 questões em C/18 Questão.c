#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num= 0, maior=0, menor=0, con=0;

    while(num != -1){

        printf("Digite um número: ");
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

    printf("\nMaior número do conjunto: %d\n", maior);
    printf("Menor número do conjunto: %d", menor);

    return 0;

}


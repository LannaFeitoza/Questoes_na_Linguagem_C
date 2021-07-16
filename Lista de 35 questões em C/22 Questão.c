#include <stdio.h>

int main(){

    int lado= 0, soma;
    
    for(lado = 1; lado <= 6; lado++){

        soma= 1 + lado;
        if(soma == 7)
            printf("Lados %d + 1 = %d\n", lado, soma);

        soma= 2 + lado;
        if(soma == 7)
            printf("Lados %d + 2 = %d\n", lado, soma);

        soma= 3 + lado;
        if(soma == 7)
            printf("Lados %d + 3 = %d\n", lado, soma);

        soma= 4 + lado;
        if(soma == 7)
            printf("Lados %d + 4 = %d\n", lado, soma);

        soma= 5 + lado;
        if(soma == 7)
            printf("Lados %d + 5 = %d\n", lado, soma);

        soma= 6 + lado;
        if(soma == 7)
            printf("Lados %d + 6 = %d\n", lado, soma);
        
    
    }

    return 0;

}
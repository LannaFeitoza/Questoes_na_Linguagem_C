/*
Autora: Lanna Feitoza
Enunciado: Elabore um algoritmo que determine o valor de S, em que:
S = 1 / 1 - 2/4 + 3/9 - 4/ 16 + 5/25 - 6/36 ... - 10/ 100.
*/

#include <stdio.h>

int main (){

    float S, denominador=1;
    int con;

    for(con=1; con <= 10; con++){
        if(con%2 != 0)
        S = 1 / denominador + S;

        else
        S= -1 / denominador + S;

        denominador++;
    }

    printf("S: %f\n", S);

    return 0;

}

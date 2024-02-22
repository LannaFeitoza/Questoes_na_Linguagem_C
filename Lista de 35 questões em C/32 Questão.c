/*
Autora: Lanna Feitoza
Enunciado: Anacleto tem 1,50 metro e cresce 2 centímetros por ano, enquanto Felisberto tem
1, 1 O metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima
quantos anos serão necessários para que Felisberto seja maior que Anacleto.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float Anacleto=1.5, Felisberto=1.1;
    int anos;

    for(anos=1; Anacleto >=  Felisberto; anos++){

        Anacleto += 0.02;
        Felisberto += 0.03;

    }

    printf("Serão necessários %d anos para Felisberto ser mais alto que Anacleto.", anos);

}

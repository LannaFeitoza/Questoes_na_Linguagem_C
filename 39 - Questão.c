#include <stdio.h>

#define a 1
#define b 1
#define c 0
/*Sobre esta quest�o, no enunciado diz: XOU. Se voc� � novo(a) programando, o s�mbolo do XOU � ^.
Sobre o XOU:
V xou V= F
V xou F= V
F xou F= F

Ordem dos operadores l�gicos:
1. Par�nteses mais internos
2. n�o
3. e
4. ou/xou(tanto faz quem for primeiro)*/

int main(){

    if ((a && b) || (a ^ b))
    printf("Verdadeiro\n");

    else
    printf("Falso\n");

    if ((a || b) && (a && c))
    printf("Verdadeiro\n");

    else
    printf("Falso\n");

    if(a || (c && b) ^ (a && (!b)))
    printf("Verdadeiro");

    else
    printf("Falso");

    return 0;

}

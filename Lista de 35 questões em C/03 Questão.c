/*
Autora: Lanna Feitoza
Enunciado: Prepare um algoritmo capaz de inverter um n�mero, de 3 d�gitos, fornecido, ou seja,
apresentar primeiro a unidade e, depois, a dezena e a centena.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero, unidade, dezena, centena;


    printf("Digite um n�mero de 3 digitos: ");
    scanf("%d", &numero);

    unidade= numero%10;

    numero= (numero - unidade)/10;
    dezena= numero%10;

    numero= (numero - dezena)/10;
    centena= numero;

    printf("\nUnidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena);
    printf("Centena: %d\n", centena);

    return 0;

}

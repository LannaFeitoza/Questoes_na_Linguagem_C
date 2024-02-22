/*
Autora: Lanna Feitoza
Enunciado: Ao completar o tanque de combust�vel de um autom�vel, fa�a um algoritmo que
calcule o consumo efetuado, assim como a autonomia que o carro ainda teria antes do
abastecimento. Considere que o ve�culo sempre seja abastecido at� encher o tanque e
que s�o fornecidas apenas a capacidade do tanque, a quantidade de litros abastecidos e a
quilometragem percorrida desde o �ltimo abastecimento.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float cap_total, l_abastecido, km_percorrido, consumo, autonomia;

    printf("Digite a capacidade total do tanque: ");
    scanf("%f", &cap_total);

    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &l_abastecido);

    printf("Digite os quil�metros percorridos: ");
    scanf("%f", &km_percorrido);

    consumo= km_percorrido / l_abastecido;

    autonomia= (cap_total - l_abastecido) * consumo;

    printf("\nConsumo: %0.2f Km/L\n", consumo);
    printf("Autonomia do carro antes de abastecer: %0.2f Km", autonomia);

    return 0;

}

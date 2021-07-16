#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int cap_total, l_abastecido, km_percorrido, consumo, autonomia;

    printf("Digite a capacidade total do tanque: ");
    scanf("%d", &cap_total);

    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%d", &l_abastecido);

    printf("Digite os quilômetros percorridos: ");
    scanf("%d", &km_percorrido);

    consumo= km_percorrido / l_abastecido;

    autonomia= (cap_total - l_abastecido) * consumo;

    printf("\nConsumo: %d Km/L\n", consumo);
    printf("Autonomia do carro antes de abastecer: %d Km", autonomia);

    return 0;

}

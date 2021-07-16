#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano, dias, meses, anos, d, m, a;

    printf("Digite o dia atual: ");
    scanf("%d", &dia);

    printf("Digite o mês atual: ");
    scanf("%d", &mes);

    printf("Digite o ano atual: ");
    scanf("%d", &ano);

    printf("\nDigite o dia de seu nascimento: ");
    scanf("%d", &dias);

    printf("Digite o mês do seu nascimento: ");
    scanf("%d", &meses);

    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &anos);

    a= ano - anos;

    m= mes - meses;

    d= dias + 30 * m + a * 365;

    m= m + 12 * a;

    printf("\nIdade em dias: %d\n", d);
    printf("Idade em meses: %d\n", m);
    printf("Idade em anos: %d", a);

    return 0;

}

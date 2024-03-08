#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void criar(char **adjetivo, char **linguagem, char **mensagem) {
    *adjetivo = strdup("boa");
    *linguagem = strdup("C");
    *mensagem = strdup("por que voce e um ponteiro no meu coração");
}

void imprimir(char *adjetivo, char *linguagem, char *mensagem) {
    printf("Voce eh %s em %s? %s\n", adjetivo, linguagem, mensagem);
}

void liberarMemoria(char *adjetivo, char *linguagem, char *mensagem) {
    free(adjetivo);
    free(linguagem);
    free(mensagem);
}

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    char *adjetivo;
    char *linguagem;
    char *mensagem;

    criar(&adjetivo, &linguagem, &mensagem);
    imprimir(adjetivo, linguagem, mensagem);
    liberarMemoria(adjetivo, linguagem, mensagem);

    return 0;
}

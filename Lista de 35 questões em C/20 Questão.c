#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float graos=1;
    int cont;

    for(cont=1; cont<=64; cont++){

        printf("Bloco: %d -> Gr�o: %.f\n", cont, graos);
        graos=graos*2;

    }

    return 0;

}

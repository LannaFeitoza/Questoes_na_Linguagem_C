//Autora: Lanna Feitoza

#include <stdio.h>

int main (){
    //Primeira forma de resolver:
    int a=10, b=20;

    b=b-a, a=a+a;

    printf("A: %d, B: %d\n", a, b);

    //Tamb�m pode criar uma terceira vari�vel para resolver esta quest�o!
    // Segunda forma de resolver:
    int c;

    a=10, b=20;
    c=a, a=b;
    b=c;

    printf("A: %d, B: %d", a, b);

    return 0;

}

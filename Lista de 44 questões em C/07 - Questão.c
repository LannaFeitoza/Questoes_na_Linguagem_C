//Autora: Lanna Feitoza

#include <stdio.h>

int main (){
    //Primeira forma de resolver:
    int a=10, b=20;

    b=b-a, a=a+a;

    printf("A: %d, B: %d\n", a, b);

    //Também pode criar uma terceira variável para resolver esta questão!
    // Segunda forma de resolver:
    int c;

    a=10, b=20;
    c=a, a=b;
    b=c;

    printf("A: %d, B: %d", a, b);

    return 0;

}

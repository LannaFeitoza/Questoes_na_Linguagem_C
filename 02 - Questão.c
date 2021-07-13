#include <stdio.h>

int main (){

    int a=30, b=20, c=a+b;

    printf("C: %d\n", c);

    b=10;

    printf("B: %d, C: %d\n", b, c);

    c= a+b;

    printf("A: %d, B: %d, C: %d", a, b, c);

    return 0;

}

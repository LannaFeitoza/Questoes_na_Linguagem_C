#include <stdio.h>

int main (){

    int a=10, b=20, c=a;

    b=c, a=b;

    printf("A: %d, B: %d, C: %d", a, b, c);

    return 0;

}

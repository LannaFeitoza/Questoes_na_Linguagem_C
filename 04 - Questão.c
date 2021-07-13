#include <stdio.h>

int main (){

    int a=10, b=a+1;

    a=b+1, b=a+1;

    printf("A: %d\n", a);

    a=b+1;

    printf("A: %d, B: %d", a, b);

    return 0;

}

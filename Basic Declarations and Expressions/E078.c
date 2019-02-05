#include <stdio.h>

int main(){

    int x = 10;

    printf("\n\nPredecrementing:\n");
    printf("x\t=%d\n", x);
    printf("x--\t=%d\n", x--);
    printf("x\t=%d\n\n", x);

    x = 10;

    printf("Postdecrementing:\n");
    printf("x = %d\n", x);
    printf("--x = %d\n", --x);
    printf("x = %d\n\n", x);

    return 0;
}

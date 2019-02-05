#include <stdio.h>

int main(){

    printf("\n\n");
    printf("x\t\tx+2\t\tx+4\t\tx+6\n");
    printf("------------------------------------------------------\n");

    for(int i = 1; i<14; i+=3){
        printf("%d\t\t%d\t\t%d\t\t%d\n", i, i+2, i+4, i+6);
    }

    printf("\n\n");

    return 0;
}

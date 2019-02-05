#include <stdio.h>

int main(){

    float result = 1.0;

    printf("\n\n");

    for(int i = 0; i<11; i++){
        printf("2^%d\t: %.0f\n", i, result);
        result = result * 2;
    }

    result = 1;

    printf("\n\n");

    for(int i = 0; i>-11; i--){
        printf("2^%d\t: %.9f\n", i, result);
        result = result * 1/2;
    }

    printf("\n\n");

    return 0;
}

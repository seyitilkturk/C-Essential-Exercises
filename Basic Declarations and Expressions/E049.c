#include <stdio.h>

int main(){

    int numbers[4];

    printf("\n\n");

    printf("Please enter a value: ");
    scanf(" %d", &numbers[0]);

    for(int i=0; i<4; i++){
        numbers[i+1] = numbers[i]*3;
    }

    printf("\n");

    for(int i=0; i<5; i++){
        printf("numbers[%d]: %d\n", i, numbers[i]);
    }

    printf("\n\n");


    return 0;
}

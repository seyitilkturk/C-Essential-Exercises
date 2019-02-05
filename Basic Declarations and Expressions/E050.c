#include <stdio.h>

int main(){

    int numbers[4];

    printf("\n\n");

    for(int i=0; i<5; i++){
        printf("Please enter number %d: ", i+1);
        scanf(" %d", &numbers[i]);
    }

    printf("\n");

    for(int i=0; i<5; i++){
        if(numbers[i]<5){
            printf("numbers[%d]: %d\n", i, numbers[i]);
        }
    }

    printf("\n");





    return 0;
}

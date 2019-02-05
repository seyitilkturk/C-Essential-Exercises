#include <stdio.h>

int main(){

    int numbers[4];

    printf("\n");

    for(int i=0; i<5; i++){
        printf("Enter a value: ");
        scanf(" %d", &numbers[i]);
            if(numbers[i]<0){
                numbers[i] = 100;
            }
    }

    printf("\n");

    for(int i=0; i<5; i++){
        printf("numbers[i]: %d\n", numbers[i]);
    }

    printf("\n\n");

    return 0;
}

#include <stdio.h>

int main(){

    int numbers[5], temp;

    for(int i=0; i<6; i++){
        printf("Enter the number %d: ", i+1);
        scanf(" %d", &numbers[i]);
    }

    for(int i=0; i<3; i++){

        temp = numbers[i];
        numbers[i] = numbers[5-i];
        numbers[5-i] = temp;

    }

    for(int i=0; i<6; i++){
        printf("numbers[%d]: %d\n", i, numbers[i]);
    }


    return 0;
}

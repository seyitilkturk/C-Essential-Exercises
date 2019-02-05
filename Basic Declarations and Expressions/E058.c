#include <stdio.h>

int main(){

    float numbers[4];
    float biggest, smallest, difference;

    printf("\n\n");

    for(int i=0; i<4; i++){
        printf("Please enter the number %.0f: ", (float)i+1);
        scanf(" %f", &numbers[i]);
    }

    biggest = numbers[0];
    smallest = numbers[0];

    for(int i=0; i<4; i++){
        if(numbers[i]<smallest){
            smallest = numbers[i];
        }
        if(numbers[i]>biggest){
            biggest = numbers[i];
        }
    }

    difference = biggest - smallest;

    printf("\nDifference between the biggest and the smallest ones: %.4f\n\n", difference);


    return 0;
}

#include <stdio.h>

int main(){

    int numbers[5];
    int smallest, pos=0;

    for(int i=0; i<6; i++){
        printf("Enter the number %d: ", i+1);
        scanf(" %d", &numbers[i]);
    }


    smallest = numbers[0];

    for(int i=0; i<6; i++){
        counter++;
        if(numbers[i]<smallest){
            smallest = numbers[i];
            pos = counter;
        }

    }

    printf("\nThe Smallest Value: %d\n", smallest);
    printf("Position of the Element: %d\n\n", pos);


    return 0;
}

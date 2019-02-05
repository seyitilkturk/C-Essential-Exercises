#include <stdio.h>

int main(){

    int pos = 1, biggest, value, counter = 1;

    printf("\n\nEnter a value: ");
    scanf(" %d", &value);
    biggest = value;

    for(int i=0; i<4; i++){
        printf("Enter a value: ");
        scanf(" %d", &value);
            counter++;
            if(value>biggest){
                biggest = value;
                pos = counter;

            }

    }

    printf("\nHighest Value: %d\n", biggest);
    printf("Position: %d\n\n", pos);

    return 0;
}

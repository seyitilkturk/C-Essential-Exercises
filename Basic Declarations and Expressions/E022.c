#include <stdio.h>

int main(){

    int value, sum = 0;

    printf("\n\n");

    for(int i = 0; i<5; i++){
        printf("Please enter a value: ");
        scanf(" %d", &value);
            if(value % 2 != 0)
                sum += value;
    }

    printf("\nTOTAL of odd numbers: %d\n\n", sum);

    return 0;
}

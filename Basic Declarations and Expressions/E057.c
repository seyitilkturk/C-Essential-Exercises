#include <stdio.h>
#include <string.h>

int main(){

    int number, reversed = 0, temp = 0;

    printf("\n\nPlease type a number: ");
    scanf(" %d", &number);

    while(number>0){

        temp = number%10;
        reversed = (reversed*10) + temp;
        number = number /10;
    }

    printf("\nReversed number: %d\n\n", reversed);

    return 0;
}

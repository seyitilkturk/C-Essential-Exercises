#include <stdio.h>

int main(){

    int first, second, temp;

    printf("\n\nPlease enter the first value: ");
    scanf(" %d", &first);
    printf("Please enther the second value: ");
    scanf(" %d", &second);

    printf("\nBefore swapping the value of x and y: %d and %d\n", first, second);

    temp = first;
    first = second;
    second = temp;

    printf("After swapping the value of x and y: %d and %d\n\n", first, second);




    return 0;
}

#include <stdio.h>

int main(){

    int first, second;

    printf("Please type a value: ");
    scanf(" %d", &first);
    printf("\nInteger value: %d", first);

    first<<=3;

    second = first;

    printf("\nThe left shifted value is: %d", second);





    return 0;
}

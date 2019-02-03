#include <stdio.h>

int main(){

    int number, power, result = 1;

    printf("\n\nThis program evaluates the value of y=x^n.\n\n");

    printf("Please enter the value of x: ");
    scanf(" %d", &number);
    printf("Please enter the value of n: ");
    scanf(" %d", &power);

    for(int i = 0; i<power; i++){
        result = result * number;
    }

    printf("RESULT: %d\n\n", result);


    return 0;
}

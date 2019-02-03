#include <stdio.h>

int main(){

    float cm, inch;

    printf("\n\nPlease type the distance in cm: ");
    scanf(" %f", &cm);

    inch = cm / 2.54;

    printf("Distance of %.2f cms is = %.2f inches.\n", cm, inch);

    return 0;
}

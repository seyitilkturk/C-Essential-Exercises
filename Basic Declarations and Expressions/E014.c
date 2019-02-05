#include <stdio.h>

int main(){

    float km, fuel, average;

    printf("\n\nPlease enter the distance in km: ");
        scanf(" %f", &km);
    printf("Please enter the fuel spent in liters: ");
        scanf(" %f", &fuel);

    average = km / fuel;

    printf("\nAverage consumption in km/lt: %.3f\n\n", average);

    return 0;
}

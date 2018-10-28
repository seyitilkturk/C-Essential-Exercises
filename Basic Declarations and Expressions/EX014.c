#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance, liter;
    float average;

    printf("\nHow long km did you go? ");
    scanf("%d", &distance);

    printf("How much fuel liter did you spend? \n");
    scanf("%d", &liter);

    average = distance / liter;

    printf("Average consumption (km/lt) %.3f \n", average);

  return 0;
}

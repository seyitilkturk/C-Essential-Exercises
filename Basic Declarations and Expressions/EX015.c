#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distance;


    printf("\nPlease type x1 point: ");
    scanf("%f", &x1);

    printf("\nPlease type x2 point: ");
    scanf("%f", &x2);

    printf("\nPlease type y1 point: ");
    scanf("%f", &y1);

    printf("\nPlease type y2 point: ");
    scanf("%f", &y2);

    distance = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));

    printf("Distance between the said points: %.4f \n", sqrt(distance));






  return 0;
}

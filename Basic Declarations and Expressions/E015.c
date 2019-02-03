#include <stdio.h>
#include <math.h>

int main(){

    float x1, y1, x2, y2, distance;

    printf("\n\nPlease enter x1: ");
    scanf(" %f", &x1);
    printf("Please enter y1: ");
    scanf(" %f", &y1);

    printf("Please enter x2: ");
    scanf(" %f", &x2);
    printf("Please enter y2: ");
    scanf(" %f", &y2);

    distance = sqrt(pow((y2-y1), 2) + pow((x2-x1), 2));

    printf("\nDistance between the said points: %.3f\n\n", distance);



    return 0;
}

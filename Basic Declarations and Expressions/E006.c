#include <stdio.h>

int main(){

    float pi = 3.14;
    float area, perimeter, radius;

    printf("\n\nPlease type the radius of the circle: ");
    scanf(" %f", &radius);

    area = pi * radius * radius;
    perimeter = 2*pi*radius;

    printf("\nThe area of the circle: %.2f\n", area);
    printf("The perimeter of the circle: %.2f\n\n", perimeter);


    return 0;
}

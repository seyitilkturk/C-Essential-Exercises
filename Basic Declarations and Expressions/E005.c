#include <stdio.h>

int main(){

    int firstSide, secondSide, perimeter, area;

    printf("\n\nPlease type the first side of the rectangle: ");
    scanf("%d", &firstSide);
    printf("Please type the second side of the rectangle ");
    scanf("%d", &secondSide);

    area = firstSide * secondSide;
    perimeter = (firstSide + secondSide) * 2;

    printf("\nArea: %d\n", area);
    printf("Perimeter: %d\n\n", perimeter);


    return 0;
}

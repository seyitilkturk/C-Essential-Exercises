#include <stdio.h>

int main(){

    float firstItemNumber, firstItemWeight;
    float secondItemNumber, secondItemWeight;
    float average;

    printf("\n\nPlease enter the number of the first item: ");
    scanf(" %f", &firstItemNumber);
    printf("Please enter the weight of the first item: ");
    scanf(" %f", &firstItemWeight);

    printf("Please enter the number of the second item: ");
    scanf(" %f", &secondItemNumber);
    printf("Please enter the weight of the second item: ");
    scanf(" %f", &secondItemWeight);

    average = ((firstItemNumber * firstItemWeight) + (secondItemNumber * secondItemWeight)) / (firstItemNumber + secondItemNumber);

    printf("\nAVERAGE TOTAL: %.3f\n\n", average);



    return 0;
}

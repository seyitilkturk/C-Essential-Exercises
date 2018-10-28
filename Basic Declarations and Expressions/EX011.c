#include <stdio.h>

int main()
{
    float w1, w2, c1, c2, average;

    printf("How much weight does the first item? : \n");
    scanf("%f", &w1);
    printf("How many do you need them? : \n");
    scanf("%f", &c1);

    printf("How much weight does the second item? : \n");
    scanf("%f", &w2);
    printf("How many do you need them? : \n");
    scanf("%f", &c2);

    average = ((w1 * c1) + (w2 * c2)) / (c1 + c2);

    printf("The average value is %f. \n", average);


  return 0;
}

#include <stdio.h>

int main(){

    int number, counter=0, sum=0, max, min;


    printf("\n\nEnter a positive number: ");
    scanf(" %d", &number);

    if(number<1){
        printf("\nThis number IS NOT POSITIVE. Try again.\n\n");
    }else{
        counter++;
        sum += number;
        max = number;
        min = number;
    }

    while(number>0){
        printf("Enter the next number: ");
        scanf(" %d", &number);

        if(number<1)
            break;

        counter++;
        sum += number;

        if(number>max)
            max = number;

        if(number<min)
            min = number;

        printf("\nTotal Number: %d\n", counter);
        printf("The biggest number: %d\n", max);
        printf("The smallest number: %d\n", min);
        printf("Average: %.3f\n\n", (float)sum/counter);
    }



    return 0;
}

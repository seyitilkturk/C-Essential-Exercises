#include <stdio.h>

int main(){

    int number, counter = 0, sum = 0;

    printf("\n\nPlease enter some values to calculate average.(888 to exit)\n\n");

    while(1){
        printf(">> ");
        scanf(" %d", &number);
        counter++;
        sum += number;
        printf("Recent Average: %d\n", sum/counter);


        if(number == 888){
            break;
        }
    }

    printf("\n\n\nTHANKS FOR USING!\n\n\n");


    return 0;
}

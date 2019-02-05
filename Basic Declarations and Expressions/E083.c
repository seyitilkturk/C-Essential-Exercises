#include <stdio.h>

int main(){

    int number, result, counter = 0, ten = 10000000;

    printf("\n\nPlease enter seven digit number: ");
    scanf(" %d", &number);

    while(ten>0){
        result = number/ten;

        if(result == 3){
            counter++;
        }
        number = number - (result*ten);
        ten = ten /10;

    }

    printf("\nThe number of threes in the given number: %d\n\n", counter);

    return 0;
}

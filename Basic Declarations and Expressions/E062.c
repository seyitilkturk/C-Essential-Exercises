#include <stdio.h>

int main(){

    int value, temp, sum=0, digit;

    printf("\n\nEnter a number less than 500: ");
    scanf(" %d", &value);

    temp = value;

    if(value>500){
        printf("\nERROR! This number is GREATER than 500. Try again.\n\n");
    }else{

        while(temp>0){
            digit = temp%10;
            sum += digit;
            temp = temp/10;
        }

        printf("\nSum of the digits of %d: %d\n\n", value, sum);
    }








    return 0;
}

#include <stdio.h>

int main(){

    int value;

    printf("\n\nEnter a value: ");
    scanf(" %d", &value);

    if(value>0){
        printf("\nPositive ");
    }else if(value<0){
        printf("\nNegative ");
    }

    if(value%2==0){
        printf("even ");
    }else if(value%2!=0){
        printf("odd ");
    }

    if(value == 0)
        printf("Even number. \n\n");

    printf("number.\n\n");







    return 0;
}

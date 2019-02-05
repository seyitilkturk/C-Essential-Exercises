#include <stdio.h>

int main(){

int value, pos = 0, neg = 0;

    printf("\n\n");

    for(int i = 0; i<5; i++){
        printf("Enter a value: ");
        scanf(" %d", &value);

        if(value<0){
            neg++;
        }else if(value>0){
            pos++;
        }
    }

    printf("\nPositive numbers: %d\n", pos);
    printf("Negative numbers: %d\n\n", neg);


    return 0;
}

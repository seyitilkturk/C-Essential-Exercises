#include <stdio.h>

int main(){

    int number, result, ten = 1000000;

    printf("\n\nPlease enter seven digit number: ");
    scanf(" %d", &number);

    printf("\n");

    while(ten>0){
        result = number/ten;
        printf(">> %d\n", result);
        number = number - (result * ten);
        ten = ten / 10;

    }

    printf("\n\n");

    return 0;
}

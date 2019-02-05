#include <stdio.h>
#include <math.h>

int main(){

    double value, result;

    printf("\n\nPlease enter the value of x: ");
    scanf(" %lf", &value);

    if(value!=0.0){
        result = sin(1/value);
        printf("\nValue of sin(1/x) is %.4lf\n\n", result);
    }else{
        printf("\nValue of x should not be zero. Try again.\n\n");
    }

    return 0;
}

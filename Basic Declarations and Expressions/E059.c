#include <stdio.h>

int main(){

    float value, sum = 1;

    printf("\n\nPlease enter a value: ");
    scanf(" %f", &value);

    for(float i=2; i<=value; i++){
        sum += 1/i;
    }

    printf("\nf(x)= 1 +");

    for(float i=2; i<value; i++){
        printf(" (1/%.0f) +", i);
    }

    printf(" 1/%.0f = %.4f\n\n", value, sum);


    return 0;
}

#include <stdio.h>
#include <math.h>

int main(){

    int first=1, num, sum=1;

    printf("\n\nEnter a number: ");
    scanf(" %d", &num);

    printf("\nf(x) = %d^4 +", first);

    for(int i=1; i<num; i++){

        printf("%d^4 +", first+i);
        sum = sum + pow(first+i,4);
        first = first + i;
    }

    printf(" %d^4 = %d\n\n", first, sum );





    return 0;
}

#include <stdio.h>

int main(){

    int a, b, c, biggest;

    printf("\n\nPlease enter the first value: ");
        scanf(" %d", &a);
            biggest = a;

    printf("Please enter the second value: ");
        scanf(" %d", &b);
            if(b>biggest)
                biggest = b;

    printf("Please enter the third value: ");
        scanf(" %d", &c);
            if(c>biggest)
                biggest = c;

    printf("\nThe biggest value: %d\n\n", biggest);


    return 0;
}

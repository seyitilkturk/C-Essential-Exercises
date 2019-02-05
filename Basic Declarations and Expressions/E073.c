#include <stdio.h>
#include <stdlib.h>

int main(){

    int first, second;

    printf("\n\nPlease enter the first value: ");
    scanf(" %d", &first);
    printf("Please enter the second value: ");
    scanf(" %d", &second);

    if(first%second == 0){
        printf("\n%d is a multiple of %d.\n\n", first, second);
    }else{
        printf("\n%d IS NOT a multiple of %d.\n\n", first, second);
    }

    return 0;
}

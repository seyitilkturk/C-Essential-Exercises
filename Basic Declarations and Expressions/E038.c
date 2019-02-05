#include <stdio.h>

int main(){

    int first, second;

    printf("\n\nEnter the first value: ");
    scanf(" %d", &first);
    printf("Enter the second value: ");
    scanf(" %d", &second);

    if(first%second==0){
        printf("\n>> %d\n\n", first/second);
    }else{
        printf("\nDivision is not possible.\n\n");
    }


    return 0;
}

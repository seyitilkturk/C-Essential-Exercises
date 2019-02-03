#include <stdio.h>

int main(){

    int first, second, temp;

    printf("\n\nPlease enter the first value: ");
    scanf(" %d", &first);
    printf("Please enter the second value: ");
    scanf(" %d", &second);

    if(first>second){
        temp = first;
        first = second;
        second = temp;
    }

    if(second%first == 0){
        printf("\nThey are multiplied!\n\n");
    }else{
        printf("\nThey are NOT muttiplied!\n\n");
    }
    
    return 0;
}

#include <stdio.h>

int main(){

    int first, second;

    printf("\n\nEnter the first value: ");
    scanf(" %d", &first);
    printf("Enter the second value: ");
    scanf(" %d", &second);

    if(first<second){
        printf("\nThe pair is ascending. \n\n");
    }else if(first>second){
        printf("\nThe pair is descending. \n\n");
    }

    return 0;
}

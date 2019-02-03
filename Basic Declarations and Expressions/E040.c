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

    printf("\n");

    for(int i = first; i<=second; i++){
        if(i%7==2 || i%7==3){
            printf(">> %d\n", i);
        }
    }

    printf("\n");

    return 0;
}

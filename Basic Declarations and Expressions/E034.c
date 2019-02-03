#include <stdio.h>

int main(){

    int first, second, temp, sum=0;

    printf("\n\nEnter the first number: ");
    scanf(" %d", &first);
    printf("Enter the second number: ");
    scanf(" %d", &second);

    if(first>second){
        temp = first;
        first = second;
        second = temp;
    }

    printf("\n");

    for(int i = first; i<=second; i++){
        if(i%2!=0){
            printf(">> %d\n", i);
            sum += i;
        }

    }

    printf("\nSUM: %d\n\n", sum);




    return 0;
}

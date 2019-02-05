#include <stdio.h>

int main(){

    int first, second, temp, sum=0;

    printf("\n\nEnter the first value: ");
    scanf(" %d", &first);
    printf("Enter the second value: ");
    scanf(" %d", &second);

    if(first>second){
        temp = first;
        first = second;
        second = temp;
    }

    printf("\n");
    for(int i = first; i<=second; i++){
        if(i%17!=0){
            printf(">> %d\n", i);
            sum += i;
        }

    }

    printf("\nSUM: %d\n\n", sum);


    return 0;
}

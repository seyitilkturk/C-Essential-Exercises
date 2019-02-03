#include <stdio.h>

int main(){

    int value;

    printf("\nPlease enter a value: ");
    scanf(" %d", &value);
    printf("\n");

    for(int i=1; i<=value; i++){
        if(value%i==0){
            printf(">> %d\n", i);
        }
    }

    printf("\n\n");




    return 0;
}

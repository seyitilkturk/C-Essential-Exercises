#include <stdio.h>

int main(){

    int value;

    printf("\nEnter a value: ");
    scanf(" %d", &value);

    printf("\n");

    for(int i=1; i<=value; i++){
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    printf("\n\n");




    return 0;
}

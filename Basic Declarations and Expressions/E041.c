#include <stdio.h>

int main(){

    int value;

    printf("\n\nEnter a value: ");
    scanf(" %d", &value);

    printf("\n");

    for(int i=1; i<=value; i++){
        printf("%d ", i);
        if(i%3==0)
            printf("\n");
    }

    printf("\n\n");


    return 0;
}

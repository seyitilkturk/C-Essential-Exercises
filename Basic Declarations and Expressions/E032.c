#include <stdio.h>

int main(){

    int value;

    printf("\n\nEnter a value: ");
    scanf(" %d", &value);

    for(int i=0; i<500; i++){
        if(i%value==3)
            printf(">> %d\n", i);
    }
    
    return 0;
}

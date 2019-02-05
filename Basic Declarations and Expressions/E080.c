#include <stdio.h>

int main(){

    int num;

    printf("\n\nPlease enter the size of the square: ");
    scanf(" %d", &num);

    printf("\n");

    for(int i = 0; i<num; i++){
        for(int j = 0; j<num; j++){
            printf("# ");
        }

        printf("\n");
    }

    printf("\n\n");


    return 0;
}

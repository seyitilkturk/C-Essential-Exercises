#include <stdio.h>

int main(){

    int num;

    printf("\n\nPlease enter the size of the hollow square: ");
    scanf(" %d", &num);

    printf("\n\n");

    for(int i = 0; i<num; i++){
        if(i == 0 || i == num-1){
            for(int j = 0; j<num; j++){
                printf("# ");
            }
        }else{
            printf("# ");

            for(int k = 0; k<num-2; k++){
                printf("  ");
            }
            printf("#");
        }

        printf("\n");
    }

    printf("\n\n");


    return 0;
}

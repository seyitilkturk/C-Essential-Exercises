#include <stdio.h>

int main(){

    int loop;

    printf("\n\nEnter a value: ");
    scanf(" %d", &loop);

    for(int i = 0; i<=loop; i++){
        if(i%2 == 0){
            printf(">> %d\n", i*i);
        }
    }


    return 0;
}

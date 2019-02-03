#include <stdio.h>

int main(){

    int number, counter = 0;

    printf("\n\nPlease type a number: ");
    scanf(" %d", &number);

    for(int i = 2; i<number; i++){
        for(int j = 2; j<=i; j++){
            if(i == j){
                printf("%d ", i);
                counter++;
                if(counter%10 == 0){
                    printf("\n");
                }
            }else if(i%j == 0){
                break;
            }
        }
    }

    return 0;
}

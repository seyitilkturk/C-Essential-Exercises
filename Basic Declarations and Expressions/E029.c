#include <stdio.h>

int main(){

    float sum = 0, odd = 0, value;

    printf("\n\n");

    for(int i=0; i<5; i++){
        printf("Enter a value: ");
        scanf(" %f", &value);

        if((int)value % 2 != 0){
            odd++;
            sum += value;
        }
    }

    printf("\nSUM: %.2f\n", sum);
    printf("Average: %.2f\n\n", sum/odd);



    return 0;
}

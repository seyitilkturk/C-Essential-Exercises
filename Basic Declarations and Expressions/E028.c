#include <stdio.h>

int main(){

    float value, pos=0, average, sum=0;

    printf("\n\n");

    for(int i=0; i<5; i++){
        printf("Enter a value: ");
        scanf(" %f", &value);

        if(value>0){
            pos++;
            sum += value;
        }
    }

    average = sum / pos;

    printf("\nTotal positive numbers: %.2f\n", pos);
    printf("Average: %.2f\n\n", average);





    return 0;
}

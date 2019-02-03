#include <stdio.h>

int main(){

    int grade, sum=0, counter=0;

    while(1){

        printf("Enter a grade: ");
        scanf(" %d", &grade);
        counter++;
        sum += grade;
        printf("Average: %d\n\n", sum/counter);


        if(grade==0)
            break;
    }

    return 0;
}

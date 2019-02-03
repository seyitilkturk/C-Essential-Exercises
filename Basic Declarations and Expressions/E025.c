#include <stdio.h>

int main(){

    int value;

    char *months[12] = {"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};

    printf("\n\n");

    while(1){

        printf("Please enter a value: ");
        scanf(" %d", &value);

            if(value == 13)
                break;

        printf(">> %s\n", months[value-1]);

    }


    return 0;

}

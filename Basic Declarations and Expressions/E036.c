#include <stdio.h>

int main(){

    int pass;

    printf("\n\nPlease enter password: ");
    scanf(" %d", &pass);

    if(pass==1234){
        printf("\nPassword is correct.\n\n");
    }else{
        printf("\nPassword is incorrect. Try again.\n\n");
    }


    return 0;
}

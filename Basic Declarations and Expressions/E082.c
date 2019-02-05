#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_list[5];
    int number, result, ten = 10000, i = 0;

    printf("\n\nPlease enter five digit number: ");
    scanf(" %d", &number);

    while(ten>0){
        result = number/ten;
        num_list[i] = result;
        number = number - (result*ten);
        ten = ten / 10;
        i++;
    }


    if(num_list[0] == num_list[4] && num_list[1] == num_list[3]){
        printf("\nThis number is palindrome.\n\n");
    }else{
        printf("\nThis number IS NOT palindrome.\n\n");
    }

    return 0;
}

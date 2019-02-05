#include <stdio.h>


int main(){

    char letter;

    printf("\n\n");

    for(int i = 65; i<=122; i++){
        letter = i;
        if(letter>90 && letter<97){
            continue;
        }else{
            printf("[%c]: %d\n", letter, letter);
        }
    }

    printf("\n\n");

    return 0;
}

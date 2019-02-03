#include <stdio.h>

int main(){

    char chr, counter = 0;

    printf("\n\n");

    for(chr = 65; chr<123; chr++){
        printf("[%d-%c]\t", chr, chr);
        counter++;

        if(counter%10 == 0){
            printf("\n");
        }
    }

    printf("\n\n");

    return 0;
}

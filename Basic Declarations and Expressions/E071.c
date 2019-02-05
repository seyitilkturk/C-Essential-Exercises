#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char stringOne[80], stringTwo[80];
    int counter = 0;

    printf("\n\nEnter a string: ");
    scanf("%[^\n]s", stringOne);

    for(int i = 0; stringOne[i] != '\0'; i++){
        stringTwo[i] = stringOne[i];
        counter++;
    }

    stringTwo[counter] = '\0';

    printf("\nCopied Text: %s\n", stringTwo);
    printf("Total Characters: %d\n\n", counter);

    return 0;
}

#include <stdio.h>

int main(){

    char firstLetter, secondLetter, thirdLetter;

    printf("\n\nPlease the the first letter: ");
    scanf(" %c", &firstLetter);
    printf("Please the the second letter: ");
    scanf(" %c", &secondLetter);
    printf("Please the the third letter: ");
    scanf(" %c", &thirdLetter);

    printf("\n\nThe reverse of %c%c%c is ", firstLetter, secondLetter, thirdLetter);
    printf("%c%c%c\n\n", thirdLetter, secondLetter, firstLetter);




    return 0;
}

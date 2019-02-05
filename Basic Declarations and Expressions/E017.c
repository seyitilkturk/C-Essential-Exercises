#include <stdio.h>

int main(){

    int totalSeconds, hours, minutes, seconds;

    printf("\n\nPlease enter the total seconds: ");
    scanf(" %d", &totalSeconds);

    hours = totalSeconds/3600;
    minutes = totalSeconds%3600/60;
    seconds = totalSeconds%360%60/1;

    printf("\nH:M:S >> %d:%d:%d\n\n", hours, minutes, seconds);

    return 0;
}

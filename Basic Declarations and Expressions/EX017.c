#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int hours, minutes, seconds, alltime;

    printf("\nPlease type total seconds: ");
    scanf("%d", &alltime);

    hours = alltime/3600;
    minutes = alltime%3600/60;
    seconds = alltime%3600%60/1;

    printf("There are: \n");
    printf("H:M:S - %d:%d:%d \n", hours, minutes, seconds);
  return 0;
}

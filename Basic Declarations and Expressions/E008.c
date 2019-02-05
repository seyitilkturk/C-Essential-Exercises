#include <stdio.h>

int main(){

    int totalDays, year, weeks, days;

    printf("\n\nPlease enter the total days: ");
    scanf("%d", &totalDays);

    year = totalDays/365;
    weeks = totalDays%365/7;
    days = totalDays%365%7/1;

    printf("\nYears: %d\n", year);
    printf("Weeks: %d\n", weeks );
    printf("Days: %d\n\n", days);



    return 0;
}

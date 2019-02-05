#include <stdio.h>

int main(){

    int totalDays, years, months, days;

    printf("Please enter the total days: ");
    scanf(" %d", &totalDays);

    years = totalDays/365;
    months = totalDays%365/12;
    days = totalDays%365%12/1;

    printf("\n%d Years, %d Months, %d Days\n\n", years, months, days);

    return 0;
}

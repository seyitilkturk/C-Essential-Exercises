#include <stdio.h>

int main()
{
    int alltime, year, month, day;

    printf("\n Please type all days: ");
    scanf("%d", &alltime);

    year = alltime / 365;
    month = alltime%365/30;
    day = alltime%365%30/1;

    printf("There are: \n");
    printf("%d Year(s) \n", year);
    printf("%d Month(s) \n", month);
    printf("%d Day(s) \n", day);

  return 0;
}

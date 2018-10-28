#include <stdio.h>

int main()
{

  int day, rdays, rweeks, ryears;

  printf("Hello. Please type number of days that you'd like to convert: \n");
  scanf("%d", &day);

  ryears = day / 365; //integer
  rweeks = (day / 7) - (ryears * 52);
  rdays = day - ((rweeks * 7) + (ryears * 365));

  printf("Number of days: %d \n", day);
  printf("Years: %d \n", ryears);
  printf("Weeks: %d \n", rweeks);
  printf("Days: %d \n", rdays);



return 0;

}

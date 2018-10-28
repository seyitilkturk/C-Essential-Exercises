#include <stdio.h>

int main()
{
  float number[4];
  int pos, sum, counter;


  printf("\nPlease input the first number: ");
  scanf("%f", &number[0]);

  printf("\nPlease input the second number: ");
  scanf("%f", &number[1]);

  printf("\nPlease input the third number: ");
  scanf("%f", &number[2]);

  printf("\nPlease input the fourth number: ");
  scanf("%f", &number[3]);

  printf("\nPlease input the fifth number: ");
  scanf("%f", &number[4]);

  for(int i =0; i<5; i++)
  {
    if(number[i]>0)
    {
      pos = pos + number[i];
      counter++;

    }

  }

printf("\nNumber of positive numbers: %d", counter);
printf("\nAverage = %d\n", pos/counter);

  return 0;
}

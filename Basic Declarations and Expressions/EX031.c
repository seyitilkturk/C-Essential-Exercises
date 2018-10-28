#include <stdio.h>

int main()
{
  int number;

  printf("\nPlease type a number: ");
  scanf("%d", &number);

  if(number == 0)
  {
    printf("\nThis number is positive even.\n");
  }

  else if(number<0 && number%2 == 0)
  {
    printf("\nThis number is negative even.\n");
  }

  else if(number<0 && number%2 != 0)
  {
    printf("\nThis number is negative odd.\n");
  }

  else if(number>0 && number%2 == 0)
  {
    printf("\nThis number is positive even.\n");
  }

  else if(number>0 && number%2 != 0)
  {
    printf("\nThis number is positive odd.\n");
  }


  return 0;
}

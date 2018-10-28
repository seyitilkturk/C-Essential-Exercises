#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int a, b, temp;

  printf("\nPlease type first integer: ");
  scanf("%d", &a);

  printf("\nPlease type second integer: ");
  scanf("%d", &b);

  if(a>b)
  {
    temp = a;
    a = b;
    b = temp;
  }

    if(b%a == 0)

    {
      printf("\nMULTIPLIED!\n");
    }

    else
    {
      printf("\nNOT MULTIPLIED!\n");
    }






  return 0;
}

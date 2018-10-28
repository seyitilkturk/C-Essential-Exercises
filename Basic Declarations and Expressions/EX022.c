#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int a;
  int sum = 0;

  for(int i = 1; i<6; i++)
  {
    printf("\nPlease type number %d: ", i);
    scanf("%d", &a);

    if(a%2 != 0)
      sum = sum + a;

    else
      continue;

  }

  printf("Sum of all odd values: %d \n", sum);



  return 0;
}

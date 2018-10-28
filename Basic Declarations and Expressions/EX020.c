#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  float a, b, c, rootone, roottwo, result;

  printf("\nInput the first integer: " );
  scanf("%f", &a);

  printf("\nInput the second integer: " );
  scanf("%f", &b);

  printf("\nInput the third integer: " );
  scanf("%f", &c);

  result = (b*b) - (4*a*c);
  rootone = (-b-sqrt(result)) / (2*a);
  roottwo = (-b+sqrt(result)) / (2*a);

  printf("Root One = %f \n", rootone);
  printf("Root Two = %f \n", roottwo);

return 0;

}

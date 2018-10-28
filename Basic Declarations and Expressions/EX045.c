#include <stdio.h>
#include <stdlib.h>

int main()
{

  float sum = 0;

  for(float i = 1; i<51; i++)
  {

    sum = sum + (1/i);
  }

  printf("\nValue of S: %.2f\n\n", sum);





  return 0;
}

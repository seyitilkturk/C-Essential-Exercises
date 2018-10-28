#include <stdio.h>

int main()
{

  int first, second;

  printf("Please input the first number: \n");
  scanf(" %d", &first);

  printf("Please input the second number: \n");
  scanf(" %d", &second);

  if(second == 0)
  {
    printf("Division not possible\n");
  }
  else
  {
    printf("Result: %d\n", first/second);
  }

  return 0;
}

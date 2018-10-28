#include <stdio.h>

int main()
{

  int a;
  int b;
  int sum;

  printf("Please define a value: \n");
  scanf("%d", &a);

  printf("Please define b value: \n");
  scanf("%d", &b);

  sum = a + b;

  printf("The sum of these two values are %d. \n", sum);


  return 0;
}

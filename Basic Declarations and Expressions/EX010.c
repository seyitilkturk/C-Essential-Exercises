#include <stdio.h>

int main()
{
  int a, b, product;

  printf("Please define a value: \n");
  scanf("%d", &a);

  printf("Please defina b value: \n");
  scanf("%d", &b);

  product = a * b;

  printf("The product of these two values is %d. \n", product);


  return 0;  
}

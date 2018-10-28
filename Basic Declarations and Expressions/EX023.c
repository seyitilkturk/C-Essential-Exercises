#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, perimeter;

  printf("\nPlease type a value of triangle: ");
  scanf("%d", &a);

  printf("\nPlease type b value of triangle: ");
  scanf("%d", &b);

  printf("\nPlease type c value of triangle: ");
  scanf("%d", &c);

  if(a<(b+c) && b<(a+c) && c<(a+b))
    {
      perimeter = a + b + c;
      printf("\n Perimeter of triangle = %d", perimeter);
    }else

    {
      printf("\n NOT POSSIBLE TO MAKE A TRIANGLE! ");
    }


return 0;

}

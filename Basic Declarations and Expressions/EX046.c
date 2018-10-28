#include <stdio.h>

int main()
{

float first = 3, second = 2, sum = 1;

for(float i = 0; i<3; i++)
{
  sum = sum + (first/second);
  first = first + 2;
  second = second * 2;

}

printf("\nValue of Series: %.2f\n\n", sum);


}

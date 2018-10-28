#include <stdio.h>
#include <stdlib.h>

int main()
{

int first, second, changer, sum = 0;

printf("Please type first integer: \n");
scanf("%d", &first);

printf("Please type second integer: \n");
scanf("%d", &second);

if(first>second)
{
  changer = first;
  first = second;
  second = changer;
}

for(int i = first; i<=second; i++)
{

  if(i%17 != 0)
    sum = sum + i;

}

printf("SUM: %d\n", sum);









  return 0;
}

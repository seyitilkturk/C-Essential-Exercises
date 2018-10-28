#include <stdio.h>
#include <stdlib.h>

int main()
{

int first, second, changer;

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

for(int i = first; i<second; i++)
{

  if(i%7 == 2 || i%7 == 3)
    printf(">> %d\n", i);
}

  return 0;
}

#include <stdio.h>

int main()
{
  int first, second, changer, sum = 0, counter = 0;

  printf("Plese input the lowest value: \n");
  scanf("%d", &first);

  printf("Plese input the highest value: \n");
  scanf("%d", &second);

  if(first>second)
  {
  printf("Hey! You have typed the highest value first. We will change them. \n");
  changer = first;
  first = second;
  second = changer;
  }

  if(first%2== 0)
    first = first + 1;

  if(second%2 == 0)
    second = second - 1;

  for(int i = first; i<=second; i++)
  {

    if(i%2 != 0)
    {
      printf(">> %d \n", i);
      sum = sum + i;
      counter++;
    }
  }

printf("Sum: %d\nList of odd numbers: %d\n", sum, counter);

  return 0;
}

#include <stdio.h>

int main()
{

  int first, second;

  printf("Please input the first number: \n");
  scanf(" %d", &first);

  printf("Please input the second number: \n");
  scanf(" %d", &second);

  if(first>second)
  {
    printf("The pair is in descending order! \n");

  }

  else if(second>first)
  {

    printf("The pair is in ascending order! \n");

  }
  else
    printf("The pair is equal to each other! \n");





  return 0;
}

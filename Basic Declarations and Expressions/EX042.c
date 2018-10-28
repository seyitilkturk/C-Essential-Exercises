#include <stdio.h>


int main()
{

  int givenLine;

  printf("Please type number of lines:  \n");
  scanf("%d", &givenLine);

  for(int i = 1; i<= givenLine; i++)
  {

    printf("%d %d %d \n", i, (i*i), (i*i*i));

  }

  return 0;
}

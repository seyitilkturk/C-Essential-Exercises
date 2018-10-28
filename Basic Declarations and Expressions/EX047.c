#include <stdio.h>

int main()
{
  int givenNumber;

  printf("Please type integer: \n");
  scanf("%d", &givenNumber);

  for(int i = 1; i<=givenNumber; i++)
  {
    if(givenNumber%i == 0)
    {
      printf(">> %d\n", i);
    }
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

int givenLine;

printf("Please type integer: \n");
scanf("%d", &givenLine);

for(int i = 1; i<= (givenLine*3); i = i + 3)
  printf("%d %d %d\n", i, i+1, i+2);

  return 0;
}

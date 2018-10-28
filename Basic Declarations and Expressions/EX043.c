#include <stdio.h>
#include <stdlib.h>

int main()
{

  int first, second, numbers = 1, counter = 0;

  printf("Please type how many numbers per a line: \n");
  scanf("%d", &first);

  printf("Please type how many lines: \n");
  scanf("%d", &second);

  for(int i = 1; i<second; i++)
  {

    for(counter = 0; counter<=first; counter++)

    {

        printf("%d ", numbers);
        numbers++;

    }

    counter = 0;
    printf("\n");


  }






  return 0;
}

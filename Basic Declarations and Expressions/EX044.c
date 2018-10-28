#include <stdio.h>

int main()
{

  int marks, average = 0, sum = 0, counter = 0;

  while(marks != 0)

  {

    printf("\nPlease type exam score: ");
    scanf("%d", &marks);
    if(marks == 0)
      break;
    counter++;
    sum = sum + marks;
    average = sum / counter;
    printf("Total Average: %d \n", average);

  }

  return 0;
}

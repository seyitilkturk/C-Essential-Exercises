#include <stdio.h>

int main()
{

  int first, second;

  printf("Please type the first coordinate: \n");
  scanf(" %d", &first);

  printf("Please type the second coordinate: \n");
  scanf(" %d", &second);

  if(first>0 && second>0)
  {
    printf("Quandrant-I (+,+) \n");
  }
  else if(first<0 && second>0)
  {
    printf("Quandrant-II (-,+)\n");
  }
  else if(first<0 && second<0)
  {
    printf("Quandrant-III (-,-)\n");
  }
  else if(first>0 && second<0)
  {
    printf("Quandrant-IV (+,-)\n");
  }
  else
  {
    printf("It is in the centre. (0,0)\n");
  }

  return 0;
}

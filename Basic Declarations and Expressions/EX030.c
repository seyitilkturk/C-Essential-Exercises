#include <stdio.h>

int main()
{

  int first, second, changer;


  printf("\nPlease type first point of the range: ");
  scanf("%d", &first);

  printf("\nPlease type second point of the range: ");
  scanf("%d", &second);

  if(first>second)
  {
    changer = first;
    first = second;
    second = changer;
  }

  for(int i = first; i<=second; i++)
  {

    if(i%2==0)
      printf(">> %d \n", i*i);



  }



  return 0;
}

#include <stdio.h>

int main()
{

int number;

printf("Input an integer: \n");
scanf("%d", &number);

for(int i=1; i<501; i++)
{
  if(i%number == 3)
    printf("%d\n",i);
}
  return 0;
}

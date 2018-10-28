#include <stdio.h>

int main()
{

int numbers[4];
int sum = 0;

printf("\nPlease input the first number: ");
scanf("%d", &numbers[0]);

printf("\nPlease input the second number: ");
scanf("%d", &numbers[1]);

printf("\nPlease input the third number: ");
scanf("%d", &numbers[2]);

printf("\nPlease input the fourth number: ");
scanf("%d", &numbers[3]);

printf("\nPlease input the fifth number: ");
scanf("%d", &numbers[4]);

for(int i = 0; i<5; i++)
{
  if( (numbers[i]%2) != 0 )
    sum = sum + numbers[i];

}

printf("Sum of all odd values: %d\n", sum);



  return 0;
}

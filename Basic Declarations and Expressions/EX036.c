#include <stdio.h>

int main()
{
  int password, a = 10;


  while(a != 0)
  {

    printf("Please type password: \n");
    scanf(" %d", &password);

    if(password == 1234)
    {
      printf("Correct. You are logging in. Please wait. \n ");
      a = 0;

    }

    else
    {
      printf("Incorrect. Try again.");

    }

    printf("\n");

  }
  return 0;
}

#include <stdio.h>

int main()
{
  int width;
  int height;
  int perimeter;
  int area;

  printf("Please type width of the rectangle: \n");
  scanf("%d", &width);
  printf("Please type height of the rectangle: \n");
  scanf("%d", &height);

  perimeter = (width + height) * 2;
  area = width * height;

  printf("The perimeter of the rectangle is %d. \n", perimeter);
  printf("The are of the rectangle is %d. \n", area);

  return 0; 
}

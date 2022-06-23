#include <stdio.h>

int main(void)
{
  int x = 77;
  int y = 115;
  int tmp;
  int *p = &tmp;

  printf("HENSU \t ADDRESS \t VALUE\n");
  printf("x \t %p \t %d\n", &x, x);
  printf("y \t %p \t %d\n", &y, y);

  *p = x;

  p = &x;
  *p = y;

  p = &y;
  *p = tmp;

  printf(" exchange x and y\n");

  printf("x \t %p \t %d\n", &x, x);
  printf("y \t %p \t %d\n", &y, y);

  return 0;
}
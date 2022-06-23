#include <stdio.h>

int main(void)
{
  int x = 77;
  int *p;

  p = &x;
  printf("HENSU \t ADDRESS \t VALUE \t INDIRECT\n");
  printf("x \t %p \t %d\n", &x, x);
  printf("p \t %p \t %p \t %d\n", &p, p, *p);

  *p = 15;
  printf("p = 15 is executed.\n");
  printf("p \t %p \t %p \t %d\n", &p, p, *p);

  return 0;
}
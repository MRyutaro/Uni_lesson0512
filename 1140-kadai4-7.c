#include <stdio.h>

void psquare(int *x)
{
  printf("Kari-Hensu x \t %p \t %p\n", &x, x);
  *x = (*x) * (*x);
}

int main(void)
{
  int b, x;

  printf("整数を入力");
  scanf("%d", &x);

  b = x;
  printf(" \t \t ADDRESS \t value\n");
  printf("jituhensu x \t %p \t %d\n", &x, x);
  psquare(&x);
  printf("square of %d is %d.\n", b, x);
  return 0;
}
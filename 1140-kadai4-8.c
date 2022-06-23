#include <stdio.h>

void pinc(int *x, int d)
{
  printf("仮引数 x \t %p \t %p\n", &x, x);
  *x = *x + d;
}

int main(void)
{
  int b, d, x;

  printf("整数を入力");
  scanf("%d", &x);
  scanf("%d", &d);

  b = x;
  printf(" \t \t アドレス \t 値\n");
  printf("実引数 x \t %p \t %d\n", &x, x);
  pinc(&x, d);
  printf("%dと%dの和は%dです。\n", b, d, x);
  return 0;
}

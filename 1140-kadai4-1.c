#include <stdio.h>

int main(void){
  int x = 77;
  double y = 3.14;

  printf("HENSU \t ADDRESS \t SIZE \t VALUE\n");
  printf("x \t %p \t %d \t %d\n", &x, sizeof(x), x);
  printf("y \t %p \t %d \t %f\n", &y, sizeof(y), y);
  return 0;
  
}
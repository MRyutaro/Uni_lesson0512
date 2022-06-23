#include <stdio.h>

int main(void){
  double y = 3.14;
  double *py = &y;

  printf("HENSU \t ADDRESS \t SIZE \t VALUE\n");
  printf("y \t %p \t %d \t %f\n", &y, sizeof(y), y);
  printf("py \t %p \t %d \t %f\n", &py, sizeof(py), py);
  return 0;
  
}
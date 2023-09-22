#include <stdio.h>

void swap(int *pa,int *pb) {
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}

int main() {
  int x = 2, y = 5;
  
  printf("[before swap] x = %d, y = %d\n", x, y);
  swap(&x, &y);
  printf("[after swap] x = %d, y = %d\n", x, y);
}
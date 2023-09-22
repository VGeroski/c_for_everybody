#include <stdio.h>

int main() {
  
  int x = 1, y = 2, z[10];
  int *ip; /* pointer to int */

  ip = &x; /* ip points to x */
  y = *ip; /* y = 1 */
  *ip = 0; /* x = 0 */

  printf("x = %d, y = %d\n", x, y);
}
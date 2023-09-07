#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit of table */
#define STEP  20  /* step size */ 

/* print Fahrenheit - Celsius table
   fahr = 0, 20, ..., 300
*/
int main() {
  float fahr, celsius;

  fahr = LOWER;
  printf("fahr celsius\n");
  while (fahr <= UPPER) {
    celsius = 5.0 * (fahr - 32.0) / 9.0;
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr += STEP;  
  }

  return 0;
}

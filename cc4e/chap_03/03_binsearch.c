#include <stdio.h>

/* binsearch: finc x in v[0] ... v[n-1] 
   returns position in array, otherwise -1
*/
int binsearch(int x, int v[], int n);

int main() {
  int v[] = {5, 9, 12, 32, 45, 100};
  printf("Finding 15 in array ... -> ");
  int position = binsearch(15, v, 6);
  if (position == -1)
    printf("number is not found!\n");
  else
    printf("number is inside array, element position %d\n", position);

  printf("Finding 32 in array ... -> ");
  position = binsearch(32, v, 6);
  if (position == -1)
    printf("number is not found!\n");
  else
    printf("number is inside array, element position %d\n", position);
 
  return 0;
}

int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  while (low <= high) {
    /* calculate position of middle element */
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1; /* seek number in left part of array */
    else if (x > v[mid])
      low = mid + 1;  /* seek number in right part of array */
    else
      return mid; /* found match */
  }

  /* if we dont return from function until this point, number is not in array */
  return -1;
}
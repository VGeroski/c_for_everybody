#include <stdio.h>

#define TRUE 1

int main() {
  int val;
  
  while(TRUE) {
    scanf("%d", &val);
    if (val == 42) {
      printf("Nice work!\n");
      break;
    }
    else if (val < 42) printf("Too low - guess again\n");
    else printf("Too high - guess again\n");
  }

  return 0;
}

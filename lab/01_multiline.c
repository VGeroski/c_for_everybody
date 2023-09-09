#include <stdio.h>

int main() {
  int i, c;

  char string[1000];
  i = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' && string[i-1] == ' ')
     ; /* do nothing */
    else string[i++] = c;
  }
  string[i] = '\0';
  printf("%s", string);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000
#define TRUE 1

int main() {
  int max, min, tempval;
  char input[MAXLINE];

  while (TRUE) {
    fgets(input, MAXLINE, stdin);
    if (strcmp(input, "done")) break;
    printf("uneseno: %s\n", input);
    printf("provera: %d\n", strcmp(input, "done"));
    tempval = atoi(input);
    if ( tempval > max ) max = tempval;
    if ( tempval < min ) min = tempval;
  }

  printf("Maximum %d\n", max);
  printf("Minimum %d\n", min);

  return 0;
}

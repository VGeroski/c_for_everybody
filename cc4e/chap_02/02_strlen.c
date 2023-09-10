#include <stdio.h>

/* strlen: return length of s */
int strlen(const char s[]);

int main() {
  char word[] = "Hello, world!";

  printf("Length of string %s is %d\n", word, strlen(word));

  return 0;  
}

int strlen(const char s[]) {
  int i;

  i = 0;
  while (s[i] != '\0')
    ++i;

  /* return length without string termination character */
  return i;
}
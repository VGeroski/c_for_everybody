#include <stdio.h>

/* getline: get line into s, return length by name */
int mygetline(char s[], int lim) {
  int i, c;

  i = 0;
  while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
    s[i++] = c;

  if (c == '\n')
    s[i++] = c;
  
  s[i] = '\0';
  return i;
}
#include <stdio.h>

int main() {
  int c, i;
  char word[1000];
  i = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n')
      word[i++] = '\n';
    else word[i++] = c;
  }
  word[i] = '\0';

  printf("%s", word);
}
#include <stdio.h>
#include <ctype.h>

/* atoi: convert s to integer */
int atoi(const char s[]);

int main() {
  char word[] = "1235";

  printf("String %s has value %d\n", word, atoi(word));
  return 0;  
}

int atoi(const char s[]) {
  int i, n;

  n = 0;
  for (i = 0; isdigit(s[i]); ++i) {
    printf("n = %d, (s[%d] - '0') = %d\n", n, i, (s[i] - '0'));
    n = 10 * n + (s[i] - '0');
  }

  return n;
}
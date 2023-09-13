#include <ctype.h>

/* atoi: convert s to integer */
int atoi(char s[]) {
  int i, n, sign;

  /* skip white space */
  for (i = 0; isspace(s[i]); i++)
    ;
  
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')
    ++i; /* skip sign */
  
  for (n = 0; isdigit(s[i]); i++)
    n = 10 * n + (s[i] - '0');

  return n;
}

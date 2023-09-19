#include <ctype.h>

/* atof: convert string s to double */
double myatof(char s[]) {
  double val, power;
  int i, sign;

  /* skip white space */
  for (i = 0; isspace(s[i]); i++)
    ;

  /* determine sign */
  sign = (s[i] == '-') ? -1 : 1;

  /* skip sign */
  if (s[i] == '+' || s[i] == '-')
    i++;
 
  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');

  if (s[i] == '.')
    i++;
  
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10;
  }

  return sign * val / power;
}
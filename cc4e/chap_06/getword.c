#include <stdio.h>
#include <ctype.h>

#define MAXWORD 100

/* Extract a single word out of the standard input, of not
   more than limit characters. Argument array W must be
   limit+1 characters or bigger. */
int getword(char *word, int limit) {
  int c, len=0;
  /* first, skip over any non alphabetics */
  while ((c=getchar())!=EOF && !isalpha(c));

  if (c==EOF)
    return EOF;
  
  /* ok, first character of next word has been found */
  word[len++] = c;
  while (len<limit && (c=getchar())!=EOF && isalpha(c)) {
  	/* another character to be stored */
  	word[len++] = c;
  }

  /* now close off the string */
  word[len] = '\0';
  return 0;
}
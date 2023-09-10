#include <stdio.h>

/* strcat: concatenate t to the end of s.
           s must be big enough 
*/
void strcat(char s[], char t[]);

int main() {
  char word[] = "Hello";
  char word2[] = ", world!\n";

  strcat(word, word2);
  printf("%s", word);

  return 0;  
}

void strcat(char s[], char t[]) {
  int i, j;
  i = j = 0;

  /* find end of s */
  while (s[i] != '\0')
    i++;

  /* copy t */
  while ((s[i++] = t[j++]) != '\0');
}
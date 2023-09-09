#include <stdio.h>
#include <string.h>

char *copy(char s1[], char s2[]);
void reverse(char t[]);

int main() {
  char t[1000];

  copy("Hello world", t);
  printf("%s\n", t);
  reverse(t);
  printf("%s\n", t);
  reverse(copy("XY", t));
  printf("%s\n", t);
  reverse(copy("Even", t));
  printf("%s\n", t);
  reverse(copy("Odd", t));
  printf("%s\n", t);
  reverse(copy("civic", t));
  printf("%s\n", t);
}

/* copy s1 to s2; assume s2 big enough */
char *copy(char s1[], char s2[])
{
  int i;
  for(i=0;(s2[i] = s1[i]);i++);
  return s2;
}

void reverse(char t[]) {
  int i, j, len;
  char temp;

  /* index of last element in string */
  for (j = 0; t[j] != '\0'; j++)
    ;

  len = j--;

  for (i = 0; i < len / 2; i++, j--) {
    temp = t[i];
    t[i] = t[j];
    t[j] = temp;
  }
}
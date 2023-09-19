#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int mygetline(char line[], int max);
int strindex(char source[], char searchfor[]);

/* patter to search for */
char pattern[] = "ould";

int main() {
  char line[MAXLINE];

  /* find all matching pattern */
  while (mygetline(line, MAXLINE)) {
    if (strindex(line, pattern) > 0) {
      printf("%s", line);
    }
  }
}
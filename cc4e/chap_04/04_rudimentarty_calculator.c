#include <stdio.h>
#define MAXLINE 1000

double myatof(char source[]);
int mygetline(char line[], int max);

int main() {
  double sum;
  char line[MAXLINE];

  sum = 0;
  while (mygetline(line, MAXLINE))
    printf("\t%g\n", sum += myatof(line));

  return 0;
}
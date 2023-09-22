#include <stdio.h>
#include <ctype.h>
#define MAXWORD 100

int getword(char *w, int lim);
struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);

int main() {
  struct tnode *root;
  char word[MAXWORD];

  root = NULL;
  while(getword(word, MAXWORD) != EOF) {
    if (isalpha(word[0]))
      root = addtree(root, word);
  }

  treeprint(root);
  return 0;
}
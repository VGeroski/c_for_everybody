#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tnode {
  char *word;          /* points to text */
  int count;           /* number of occurrances */
  struct tnode *left;  /* left child */
  struct tnode *right; /* right child */
};
struct tnode *addtree(struct tnode *, char *);
struct tnode *talloc();
void treeprint(struct tnode *);
char *strdup2(char *);

/* addtree: add a node with w, at or below p */
struct tnode *addtree(struct tnode *p, char *w) {
  int cond;
  /* attach for this node new word */
  if (p == NULL) {
    p = talloc();
    p->word = strdup2(w);
    p->count = 1;
    p->left = p->right = NULL;
  /* check where to attach new word */
  } else if ((cond = strcmp(w, p->word)) == 0) {
    p->count++; /* repeated word */
  /* less than into left subtree */
  } else if (cond < 0) {
    p->left = addtree(p->left, w);
  /* greater than into right subtree */
  } else {
    p->right = addtree(p->right, w);
  }

  return p;
}

/* talloc: make a tnode */
struct tnode *talloc() {
  return (struct tnode *) malloc(sizeof(struct tnode));
}

/* treeprint: in-order print of tree p */
void treeprint(struct tnode *p) {
  if (p != NULL) {
    treeprint(p->left);
    printf("%4d %s\n", p->count, p->word);
    treeprint(p->right);
  }
}

/* make a duplicate of s */
char *strdup2(char *s) {
  char *p;
  /* reserve +1 for \0 */
  p = (char *) malloc(strlen(s) + 1);
  if (p != NULL)
    strcpy(p, s);

  return p;
}
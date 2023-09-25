#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  char *text;        /* pointer to text */
  struct node *next; /* pointer to next node in list */
} lnode;

typedef struct lst {
  lnode *head; /* head of list */
  lnode *tail; /* tail of list */
  int count;   /* number of elements in list */
} pylist;

pylist *pylist_new();
void pylist_append(pylist *self, char *str);
void pylist_print(pylist *self);
int pylist_len(pylist *self);
int pylist_index(pylist *self, char *key);
void pylist_del(pylist *self);

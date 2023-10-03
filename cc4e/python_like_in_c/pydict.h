#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dnode {
  /* key- value pair */
  char *key;
  char *value;
  struct dnode *next;
} node;

typedef struct dict {
  node *head;
  node *tail;
  int count;
} pydict;

/* Constructor */
pydict *pydict_new();
/* print in format: {'z': 'W', 'y': 'B', 'c': 'C', 'a': 'D'} */
void pydict_print(pydict *self);
/* find a node - used in get and put */
node* pydict_find(pydict* self, char *key);
/* x[key] = value; Insert or replace the value associated with a key */
void pydict_put(pydict *self, char *key, char *value);
/* x.get(key) - Returns NULL if not found */
char* pydict_get(pydict *self, char *key);
/* returns length of dictionary */
int pydict_len(pydict *self);
/* Destructor */
void pydict_del(pydict *self);
#include "pydict.h"

pydict *pydict_new() {
  /* make dictionary structure in memory */
  pydict *p = malloc(sizeof(*p));
  /* initialize empty dictionary */
  p->head = p->tail = NULL;
  p->count = 0;
  return p;
}

node* pydict_find(pydict* self, char *key) {
  node *cur = self->head;
  while (cur) {
    /* if we find key inside dictionary, return that node */
    if (strcmp(cur->key, key) == 0)
      return cur;
    cur = cur->next;
  }
  
  return NULL;
}

node* make_new_node(char *key, char *value) {
  node *new = malloc(sizeof(*new));
  /* set key */
  new->key = malloc(sizeof(*key));
  strcpy(new->key, key);

  /* set value */
  new->value = malloc(sizeof(*value));
  strcpy(new->value, value);

  new->next = NULL;
  
  return new;
}

void pydict_put(pydict *self, char *key, char *value) {
  node *old_elem = pydict_find(self, key);
  if (old_elem) {
    /* free memory of old value */
    free(old_elem->value);
    /* add new value */
    old_elem->value = malloc(sizeof(char));
    strcpy(old_elem->value, value);
  } else {
    /* construct new node */
    node *new_elem = make_new_node(key, value);
    self->count++;
    if (self->head == NULL) {
      self->head = self->tail = new_elem;
    } else {
      node *cur = self->head;
      while (cur->next != NULL)
        cur = cur->next;
      cur->next = new_elem;
      self->tail = new_elem;
    }
  }
}

char* pydict_get(pydict *self, char *key) {
  node *elem = pydict_find(self, key);
  if (elem) return elem->value;
  return NULL;
}

int pydict_len(pydict *self) { return self->count; }

void pydict_print(pydict *self) {
  node *cur = self->head;
  printf("{");
  while (cur) {
    printf("'%s'", cur->value);
    cur = cur->next;
    if (cur) printf(",");
  }
  printf("}\n");
}

void pydict_del(pydict *self) {
  node *cur, *next;
  cur = self->head;
  while (cur) {
    free(cur->key);
    free(cur->value);
    next = cur->next;
    free(cur);
    cur = next;
  }

  free((void *) self);
}
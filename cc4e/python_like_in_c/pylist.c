#include "pylist.h"

pylist *pylist_new() {
  pylist *p = malloc(sizeof(*p));
  p->head = p->tail = NULL;
  p->count = 0;
  return p;
}

lnode *new_node(char *str) {
  lnode *node = malloc(sizeof(*node));
  node->text = (char *) malloc(strlen(str));
  strcpy(node->text, str);
  node->next = NULL;
}

void pylist_append(pylist *self, char *str) {
  lnode *node = new_node(str);
  if (self->head == NULL) {
    /* adding node on first position */
    if (node != NULL) {
      self->head = self->tail = node;
      self->count++;
    }
  } else {
    /* adding node to last position in list */
    lnode *temp = self->head;
    while(temp->next) {
      temp = temp->next;
    }
    temp->next = node;
    if (node != NULL) {
      self->tail = node;
      self->count++;
    }
  }
}

void pylist_print(pylist *self) {
  lnode *cur;
  cur = self->head;
  printf("[");
  while (cur) {
    printf("'%s'", cur->text);
    cur = cur->next;
    if(cur) printf(", ");
  }
  printf("]\n");
}

int pylist_len(pylist *self) {
  return self->count;
}

int pylist_index(pylist *self, char *key) {
  lnode *cur;
  cur = self->head;
  int index = 0;
  while (cur) {
    if (strcmp(cur->text, key) == 0) return index;
    cur = cur->next;
    index++;
  }
  return -1;
}

void pylist_del(pylist *self) {
  lnode *cur, *next;
  cur = self->head;
  while (cur) {
    free(cur->text);
    next = cur->next;
    free(cur);
    cur = next;
  }
  free((void *) self);
}

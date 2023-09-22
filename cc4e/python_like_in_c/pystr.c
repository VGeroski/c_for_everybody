#include "pystr.h"

pystr *pystr_new() {
  pystr *p = malloc(sizeof(*p));
  p->length = 0;
  p->alloc = 10;
  p->data = malloc(p->alloc);
  p->data[0] = '\0';
  return p;
}

void pystr_dump(const pystr *self) {
  printf("Pystr length = %d, alloc = %d, data = %s\n", self->length, self->alloc, self->data);
}

void pystr_append(pystr *self, char c) {
  if (self->length >= (self->alloc - 2)) {
    /* not enough space, we need to reallocate memory */
    /* increase memory for 10 places */
    self->alloc += 10;
    /* reallocate memory copy data, and free old data */
    self->data = realloc(self->data, self->alloc);
    /* now we have enough space to put new char in data array */
    self->data[self->length++] = c;
    self->data[self->length] = '\0';
  /* enough space */
  } else {
    /* increase length and place new char and move 0 char by one place */
    self->data[self->length++] = c;
    /* dont increase length here because we dont want to count 0 character */
    self->data[self->length] = '\0'; 
  }
}

void pystr_appends(pystr *self, char *word) {
  while(*word != '\0') {
    pystr_append(self, *word);
    *word++;
  }
}

void pystr_assign(pystr *self, char *word) {
  pystr_del(self);
  self = pystr_new();
  pystr_appends(self, word);
}

void pystr_del(const pystr *self) {
  /* first free data inside structure */
  free((void *) self->data);
  /* than structure itself */
  free((void *) self);
}

int pystr_len(const pystr* self) { return self->length; }
char *pystr_str(const pystr* self) { return self->data; }
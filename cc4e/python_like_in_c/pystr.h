#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct str
{
  int length; /* current length of data (string) */
  int alloc;  /* size of array to store data */
  char *data; /* pointer to char array */
} pystr;

pystr *pystr_new();
void pystr_dump(const pystr *self);
void pystr_append(pystr *self, char c);
void pystr_appends(pystr *self, char *word);
void pystr_assign(pystr *self, char *word);
void pystr_del(const pystr *self);
int pystr_len(const pystr* self);
char *pystr_str(const pystr* self);
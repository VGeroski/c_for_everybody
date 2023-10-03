#include "pydict.h"

int main() {
  pydict *dct = pydict_new();
  pydict_put(dct, "z", "Catch phrase");
  pydict_print(dct);
  pydict_put(dct, "z", "W");
  pydict_print(dct);
  pydict_put(dct, "a", "C");
  pydict_put(dct, "y", "B");
  pydict_put(dct, "c", "D");
  pydict_print(dct);

  printf("Length = %d\n", pydict_len(dct));
  printf("z = %s\n", pydict_get(dct, "z"));
  printf("x = %s\n", pydict_get(dct, "x"));

  printf("\nDump\n");
  for (node *cur = dct->head; cur != NULL; cur = cur->next) {
    printf("%s = %s\n", cur->key, cur->value);
  }

  pydict_del(dct);
}
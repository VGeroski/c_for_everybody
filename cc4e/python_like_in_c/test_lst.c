#include "pylist.h"

int main() {
  pylist *lst = pylist_new();
  pylist_append(lst, "Hello World");
  pylist_print(lst);
  pylist_append(lst, "Vladimir");
  pylist_print(lst);
  pylist_append(lst, "Brian");
  pylist_print(lst);

  printf("Length = %d\n", pylist_len(lst));
  printf("Brian? %d\n", pylist_index(lst, "Brian"));
  printf("Vladimir? %d\n", pylist_index(lst, "Vladimir"));
  printf("Check? %d\n", pylist_index(lst, "Check"));
  pylist_del(lst);
}
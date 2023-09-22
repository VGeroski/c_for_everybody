#include "pystr.h"

int main() {
  printf("Testing pystr class\n");
  pystr *x = pystr_new();
  pystr_dump(x);

  pystr_append(x, 'H');
  pystr_dump(x);

  pystr_append(x, 'e');
  pystr_dump(x);
  pystr_append(x, 'l');
  pystr_dump(x);
  pystr_append(x, 'l');
  pystr_dump(x);
  pystr_append(x, 'o');
  pystr_dump(x);
  pystr_append(x, ' ');
  pystr_dump(x);
  pystr_append(x, 'w');
  pystr_dump(x);
  pystr_append(x, 'o');
  pystr_dump(x);
  pystr_append(x, 'r');
  pystr_dump(x);
  pystr_append(x, 'l');
  pystr_dump(x);
  pystr_append(x, 'd');
  pystr_dump(x);

  pystr_appends(x, ", Vladimir");
  pystr_dump(x);

  pystr_assign(x, "A completely new string");
  printf("String = %s\n", pystr_str(x));
  printf("Length = %d\n", pystr_len(x));

  pystr_del(x);
}
#include "point.h"

int main() {
  struct Point *pt = point_new(4.0, 5.0);
  pt->dump(pt);
  printf("Origin %f\n", pt->origin(pt));
  pt->del(pt);
}
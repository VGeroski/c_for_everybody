#include "point.h"

void point_dump(const struct Point *self) {
  printf("Object point @%p, x = %f, y = %f\n", self, self->x, self->y);
}

void point_del(const struct Point *self) {
  free((void *) self);
}

double point_origin(const struct Point *self) {
  double x = self->x;
  double y = self->y;
  return sqrt(x*x + y*y);
}

struct Point *point_new(double x, double y) {
  struct Point *p = malloc(sizeof(*p));
  p->x = x;
  p->y = y;
  p->dump = &point_dump;
  p->origin = &point_origin;
  p->del = &point_del;
  return p;
}
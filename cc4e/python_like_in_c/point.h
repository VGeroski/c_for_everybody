#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point {
  double x;
  double y;

  /* functions pointers */
  void (*del) (const struct Point *self);
  void (*dump) (const struct Point *self);
  double (*origin) (const struct Point *self);
};

void point_dump(const struct Point *self);
void point_del(const struct Point *self);
double point_origin(const struct Point *self);
struct Point *point_new(double x, double y);
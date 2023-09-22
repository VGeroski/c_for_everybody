#include <stdio.h>

struct point {
  int x;
  int y;
};

/* makepoint: make a point from x and y components */
struct point makepoint(int x, int y) {
  struct point temp;
  temp.x = x;
  temp.y = y;
  return temp;
}

/* addpoint: add two points */
struct point addpoint(struct point p1, struct point p2) {
  p1.x += p2.x;
  p1.y += p2.y;
  return p1;
}

int main() {
}
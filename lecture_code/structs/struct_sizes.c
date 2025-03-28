#include <stdio.h>

struct Rect {
  int x, y, w, h;
};

struct Foo {
  char c;
  int x;
};

int main() {
  printf("%lu\n", sizeof(struct Rect));
  printf("%lu\n", sizeof(struct Foo));
}

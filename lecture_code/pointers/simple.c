#include <stdio.h>

int main() {
  int x = 10;
  int *p = &x;
  printf("p: %p\n", p);
  printf("*p: %d\n", *p);
  *p = -1;
  printf("x: %d\n", x);
}

#include <stdio.h>

int main() {
  int x = 5;
  int *p = &x;
  p[0] = 17;
  printf("%d\n", x);
}

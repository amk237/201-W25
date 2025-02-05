#include <stdio.h>

void times2(int x) {
  x = x*2;
}

int main() {
  int x = 10;
  times2(x);
  printf("%d\n", x);
}

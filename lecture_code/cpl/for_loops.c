#include <stdio.h>

int main() {
  for (int i = 0; i < 10; ++i) {
    printf("%d\n", i);
  }

  int x;
  int y;
  for (x = 0, y = 0; x*y < 100; x = x+2, y = y+3) {
    printf("(%d, %d)\n", x, y);
  }

  // Note: Variables that are defined within curly braces,
  // or also within a for loops initialization statement
  // are /LOCAL/ so that scope.
  printf("x: %d, y: %d\n", x, y);
  // The following line stops my program from compiling,
  // because the identifier i doesn't exist here. It was
  // local to its for loop's scope.
  printf("i: %d\n", i);
}

#include <stdio.h>

int main() {
  // This program reads all ints from the standard input stream
  // and prints them all out on the same line
  int x;
  while (scanf("%d", &x) == 1) {
    printf("%d ", x);
  }
  printf("\n");
}

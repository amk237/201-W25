#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("We received %d cmd line arguments\n", argc);
  for (int i = 0; i < argc; ++i) {
    printf("argv[%d]: %s\n", i, argv[i]);
  }
}

#include <stdio.h>

int main(int argc, char **arg) {
  char c1 = 'H';
  char c2 = 101;
  char c3 = c1+36; // 'H' + 36
  char c4 = 'z' - 11;
  printf("%c%c%c%c%c\n", c1, c2, c3, c3, c4);
  printf("%u-%u-%u-%u-%u\n", c1, c2, c3, c3, c4);
}

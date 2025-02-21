#include <stdio.h>

int main() {
  char c = getchar(); // This function produces for us ONE character from stdin stream.
  // We'll use it more soon!
  if (c >= 'a' && c <= 'z') {
    c = c - 'a' + 'A';
  }
  printf("%c\n", c);
}

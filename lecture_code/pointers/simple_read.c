#include <stdio.h>

int main() {
  int x;
  // scanf does not return the value it reads in, in fact it can
  // read multiple values in if you give it a string with multiple
  // specifiers! So, what does it return?
  // scanf returns an int, specifically the number of items read.
  // This is important, because scanf can fail!
  // In this case because we are reading ONE int, we expect the return
  // value to be 1. If it is not, the read failed.
  if (scanf("%d", &x) == 1) {
    // Read was successful because I asked to read one int, and scanf
    // returned 1
    printf("%d\n", x*3);
  } else {
    // If the read failed... let's see what character was at the start
    // of the stream that wasn't part of an integer
    char c = getchar();
    printf("Couldn't read a integer because next character in stream");
    printf(" was this: '%c'\n", c);
    c = getchar();
    printf("Since I already read that character, my next call of getchar ");
    printf(" reads the next character in the stream, which was: '%c'\n", c);
  }
}

#include <stdio.h>

void print_binary(unsigned int num) {
  /* This function takes one natural number parameter and prints out
   * the binary representation of that number
   */

  // This function currently doesn't work because we're working from right to
  // left... In order to make work we need to work left to right. We can do so
  // by finding the largest power of two that is smaller than num.
  // And then, changing our loop condition and our updates.
  while (num != 0) {
    if (num % 2) {
      printf("1");
    } else {
      printf("0");
    }
    num = num/2;
  }
  printf("\n");
}

int main() {
  print_binary(5); // Should print 101
  print_binary(11); // This should print 1011
}

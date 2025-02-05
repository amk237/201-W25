#include <stdio.h>

/*
 * This program reads one integer from stdin, if the user does not provide
 * an integer, continually ask them for one until the provide it!
 * once provided, print out 3x that number.
*/

// This program is not finished yet, we will be completing
// it in class. It currently still is buggy!


int main() {
  int x;
  while (scanf("%d", &x) != 1) {
    printf("That was not an int, please enter an int: ");
  }
  printf("%d\n", x*2);
}

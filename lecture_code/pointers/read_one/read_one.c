#include <stdio.h>

/*
 * This program reads one integer from stdin, if the user does not provide
 * an integer, continually ask them for one until the provide it!
 * once provided, print out 3x that number.
 * we assume at least one integer is entered.
*/

// This program is not finished yet, we will be completing
// it in class. It currently still is buggy!


int main() {
  int x;
  while (scanf("%d", &x) != 1) {
    // If we enter this loop, it is because the above call to scanf
    // failed to read an int. If that is the case then (likely)
    // the immediate next character in the stream is not part of
    // an integer number (i.e. nota digit). There is also the
    // possibility that the stream is in a failed state (we won't worry
    // about that in this course) or that the stream has reached the EOF
    // signal (we'll talk about that later).
    // Because we assume our input has at least 1 int in it, we know we haven't
    // reached EOF yet, if we have it's invalid input!
    char c = getchar();
    //printf("That was not an int, please enter an int: ");
  }
  printf("%d\n", x*2);
}

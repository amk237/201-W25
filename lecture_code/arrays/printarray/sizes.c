#include <stdio.h>


int main() {
  int x = 5;
  char c = 'a';
  char *p = &x;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *z = arr;
  printf("sizeof(x): %lu\n", sizeof(x));
  printf("sizeof(c): %lu\n", sizeof(c));
  printf("sizeof(p): %lu\n", sizeof(p));
  printf("sizeof(arr): %lu\n", sizeof(arr));
  printf("sizeof(z): %lu\n", sizeof(z));
  // A pointer is a pointer is a pointer, no matter what a pointer points at
  // its size it still its size. Because a pointer is just a number, when you
  // ask for the size of a pointer, you just receive the size of the pointer itself,
  // not the data it points at!
  // Furthermore...
  printf("sizeof(*p): %lu\n", sizeof(*p));
  printf("sizeof(*z): %lu\n", sizeof(*z));
  // These both produce 4 because these are pointers to ints, the only thing we know
  // is that they point at int.
}

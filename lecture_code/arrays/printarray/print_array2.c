#include <stdio.h>

void printArray(int arr[], unsigned int len) {
  // Prints out each integer in the array with a space between them
  // and prints a newline at the end.
  for (unsigned int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int b[] = {7, 3, 2};
  printArray(a, sizeof(a)/sizeof(a[0]));
  printArray(b, sizeof(b)/sizeof(b[0]));
}

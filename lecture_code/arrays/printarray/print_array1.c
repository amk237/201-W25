#include <stdio.h>

void printArray(int arr[]) {
  // Prints out each integer in the array with a space between them
  // and prints a newline at the end.
  unsigned int len = sizeof(arr)/sizeof(arr[0]);
  for (unsigned int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int b[] = {7, 3, 2};
  printArray(a);
  printArray(b);
}

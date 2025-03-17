#include <stdio.h>


int main() {
  int arr[100];
  int size = 0;
  for (;;) {
    int cur;
    if (scanf("%d", &cur) != 1) {
      if (feof(stdin)) {
        // feof returns true if its parameter has reached EOF.
        // Note: in order to REACH EOF, you must attempt to read
        // and FAIL that read due to the fact that you are in fact
        // at EOF.
        printf("EOF reached, printing out sorted numbers now\n");
        break;
      }
    }
    int j = 0;
    for (j = 0; j < size && cur >= arr[j]; ++j);
    for (int k = size; k > j; --k) {
      arr[k] = arr[k-1];
    }
    arr[j] = cur;
    ++size;
  }
  for (int i = 0; i < size; ++i) {
    printf("%d\n", arr[i]);
  }
}

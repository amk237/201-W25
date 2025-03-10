#include <stdio.h>
#include <stdlib.h>

void insert(int *arr, int len, int cap, int val) {
  int i = 0;
  for (; arr[i] < val && i < len; ++i);
  for (int j = len; j > i; --j) {
    arr[j] = arr[j-1];
  }
  arr[i] = val;
}

int main() {
  int len = 0;
  int cap = 4;
  int *arr = malloc(sizeof(int)*cap);
  int x;
  while (scanf("%d", &x) == 1) {
    // First, we must check if our array is full.
    if (len == cap) {
      // Make a NEW larger array.
      int *tmp = malloc(sizeof(int)*(cap+1));
      // Copy the items over from the old smaller array
      for (int i = 0; i < len; ++i) {
        tmp[i] = arr[i];
      }
      // Before we lose our pointer to our old array, we must make
      // sure to free it:
      free(arr);
      // Now we update our arr to point at our new bigger array
      arr = tmp;
      cap = cap + 1;
    }
    arr[len] = x;
    ++len;
  }
  for (int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

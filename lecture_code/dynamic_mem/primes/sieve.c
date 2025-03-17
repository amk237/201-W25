#include <stdio.h>
#include <stdlib.h>
void primes(int n) {
  // This function takes an integer n and prints out all the
  // primes less than that number.
  int size = n-2;
  int *arr = malloc(sizeof(int)*(size));
  for (int i = 0; i < size; ++i) {
    arr[i] = i+2;
  }
  // We initialize our array, but we will need to "remove" things
  // from our array. Since we know the structure of our array
  // should only be the numbers from 2 to n-1, and then we remove
  // numbers, then that means that 0 should never appear in our
  // array. As such, we'll use 0 to "remove" items from our array.
  // if the item at index i is 0, then that is not part of our
  // array
  int i = 0;
  while (i < size) {
    // Assume, the current i is always our "next" prime.
    printf("%d ", arr[i]);
    // Now 'remove' all numbers divisible by this number
    // from our array (by striking them out as 0s)
    for (int j = i+arr[i]; j < size; j = j + arr[i]) {
      arr[j] = 0;
    }
    for (i = i + 1; i < size && !arr[i]; ++i);
  }
  printf("\n");
  free(arr);
}


int main() {
  int n;
  scanf("%d", &n);
  primes(n);
}

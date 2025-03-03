#include <stdio.h>

/*
This program reads in 10 integers from the standard input stream
and prints them out in ascending sorted order (That is, smallest item
first, and largest item last).
*/

int main() {
  int arr[10];
  // We want to place each item in our array in its sorted position.
  // We do not want to place them one after another. We could do this,
  // but that will ultimately be more work.
  // So, how do we know where to place this item?
  // We must find the index of the first item larger than us.
  // And THAT is where we'd like to place this item. So we must
  // keep track of how many items we've stored so far! We will call that
  // our size.
  int size = 0;
  for (int i = 0; i < 10; ++i) {
    int cur;
    if (scanf("%d", &cur) != 1) {
      // Scanf failed... invalid input.
      printf("Invalid input\n");
      return 1;
    }
    int j = 0;
    for (j = 0; j < size && cur >= arr[j]; ++j);
    // After this loop is done j will be the index where we'd like to insert
    // this item.
    // However, first, we must shift everything that is right of j, to the righ
    // e.g. consider we're inserting 6 into this array: {3, 4, 5, 7, 8, 9}
    // We'd like to insert 6 at index 3, however, if we just write 6 there
    // we overwrite the 7. So we have to "make space" by shifting all those values
    // to the right one to make an empty gap where we can insert this 6.
    for (int k = size; k > j; --k) {
      arr[k] = arr[k-1];
    }
    // Now, our array should have moved every item one over, and we can now
    // place our new item in index j.
    arr[j] = cur;
    ++size;
  }
  for (int i = 0; i < 10; ++i) {
    printf("%d\n", arr[i]);
  }
}

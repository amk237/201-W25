#include <stdio.h>

int replace(int *arr, const int len, const int tar, const int repl) {
  for (int i = 0; i < len; ++i) {
    if (tar == arr[i]) {
      arr[i] = repl;
    }
  }
}


int main() {
  int myArr[] = {1, 1, 2, 3, 0, 5, 1, 2, 4, 5, 6, 1};
  int target = 1;
  replace(myArr, sizeof(myArr)/sizeof(myArr[0]), target, -1);
  for (int i = 0; i < sizeof(myArr)/sizeof(myArr[0]); ++i) {
    printf("%d ", myArr[i]);
  }
  printf("\n");
  target = 3;
  replace(myArr, sizeof(myArr)/sizeof(int), target, -3);
  for (int i = 0; i < sizeof(myArr)/sizeof(int); ++i) {
    printf("%d ", myArr[i]);
  }
  printf("\n");
}

#include <stdio.h>

int main() {
  int arr[10];
  int x = 5;
  for (int i = 0; i < 10; ++i) {
    arr[i] = i*2;
  }

  for (int i = 0; i < 10; ++i) {
    printf("%d\n", arr[i]);
  }
}

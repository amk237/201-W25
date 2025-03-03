#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  for (unsigned int i = 0; i < 5; ++i) {
    printf("%d\n", *(arr+i));
  }
  char cArr[] = {'a', 'b', 'c', 'd', 'e'};
  for (unsigned int i = 0; i < 5; ++i) {
    printf("arr+%d: %p\n", i, arr+i);
    printf("*(arr+%d): %d\n", i, *(arr+i));
    printf("cArr+%d: %p\n", i, cArr+i);
    printf("*(cArr+%d): %c\n", i, *(cArr+i));
  }
}

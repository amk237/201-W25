#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = malloc(sizeof(int)*1);
  int *arr = malloc(sizeof(int)*10);
  for (int i = 0; i < 10; ++i) arr[i] = -1-i;
  *p = 13;
  printf("%d\n", *p);
  for (int i = 0; i < 10; ++i) printf("%d ", arr[i]);
  printf("\n");
  free(p);
  free(arr);
}

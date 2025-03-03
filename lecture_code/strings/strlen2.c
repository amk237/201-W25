#include <stdio.h>

int our_strlen(const char *s) {
  int i = 0;
  for (; *s; ++s, ++i);
  return i;
}

int main() {
  const char *s = "one string";
  const char arr[] = "another";
  printf("string: %s\nlen:%d\n", s, our_strlen(s));
  printf("string: %s\nlen:%d\n", arr, our_strlen(arr));
}

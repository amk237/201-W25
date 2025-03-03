#include <stdio.h>

int myStrlen(const char *s) {
  int i = 0;
  while (s[i] != '\0') {
    ++i;
  }
  return i;
}

int main() {
  const char *s = "one string";
  const char arr[] = "another";
  printf("string: %s\nlen:%d\n", s, myStrlen(s));
  printf("string: %s\nlen:%d\n", arr, myStrlen(arr));
}

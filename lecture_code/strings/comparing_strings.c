#include <stdio.h>
#include <string.h>

int main() {
  const char *s = "xyz";
  char myS[] = "abc";
  char otherS[] = {'x', 'y', 'z', '\0'};
  const char *s2 = "abc";
  if (s < myS) {
    printf("%s < %s\n", s, myS);
  } else {
    printf("%s >= %s\n", s, myS);
  }

  if (otherS < s2) {
    printf("%s < %s\n", otherS, s2);
  } else {
    printf("%s >= %s\n", otherS, s2);
  }
}

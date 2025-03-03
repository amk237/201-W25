#include <string.h>
#include <stdio.h>

int main() {
  const char *s = " copy me";
  char myS[] = {'a', 'b', 'c', 'd', '\0'};
  char otherS[] = "Hello CMPUT201!";
  printf("otherS: %s\n", otherS);
  printf("Going to concatenate %s on to this string: %s\n", s, myS);
  strcat(myS, s);
  printf("new myS: %s\n", myS);
  printf("otherS: %s\n", otherS);
}

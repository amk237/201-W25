#include <stdio.h>

int main() {
  char myS[] = "On stack";
  char *p = "On text/data";
  printf("%s\n", myS);
  printf("%s\n", p);
  myS[1] = 'o';
  printf("%s\n", myS);
  // Line below crashes the program!!
  p[1] = 'o';
  printf("%s\n", p);
}

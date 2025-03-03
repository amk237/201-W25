#include <stdio.h>
#include <string.h>


int main() {
  char myS[50] = "Hello";
  char otherS[] = "Leave me alone!";
  printf("%s\n", myS);
  const char *s = " cmput 201";
  strcat(myS, s); // Here, I know I have enough space in myS to concatenate s on
  // so this is safe!
  printf("myS: %s\n", myS);
  printf("otherS: %s\n", otherS);
}

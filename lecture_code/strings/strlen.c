#include <stdio.h>
#include <string.h>

int main() {
  const char *s = "abcd";
  char myStr[] = "bigger string";
  char otherStr[] = "what is going on here!";
  // Wait, if we're just passing a pointer to an array to strlen how can it
  // it figure out the length of the array?
  printf("%lu\n", strlen(s));
  // Note while the strlen of myStr is 13, the actual size of the
  // array we calculate here is 14!
  printf("strlen(myStr): %lu\n", strlen(myStr));
  printf("sizeof(myStr)/sizeof(myStr[0]): %lu\n", sizeof(myStr)/sizeof(myStr[0]));
  // The secret is in order for an array of characters to be considered a string
  // it must contain at least one null terminator character (ascii value 0, or
  // represented by the character litera '\0' not to be confused with the
  // character literal '0'). The null terminator indicates the end of the string.
  // So strlen simply iterates over the array character by character until it sees
  // the null terminator. This is how most string functions operate, including how
  // printf prints out a str.
  printf("%s\n", myStr);
  // Note I have overwitten the e in myStr with a null terminator, so now all
  // string functions correctly assume this string ends as just "bigg", despite
  // the fact that the array is still 14 characters long containing:
  // {'b', 'i', 'g', 'g', '\0', 'r', ' ', 's', 't', 'r', 'i', 'n' , 'g', '\0'}
  myStr[4] = '\0';
  printf("%s\n", myStr);
  printf("strlen(myStr): %lu\n", strlen(myStr));
  printf("sizeof(myStr)/sizeof(myStr[0]): %lu\n", sizeof(myStr)/sizeof(myStr[0]));

  // The following is undefined behaviour and a BUG!
  // Place the e back in index 4.. that's fine, we still have a null terminator
  // in the array...
  myStr[4] = 'e';
  // uh oh! Overwrite the null terminator at the end of the array, now my
  // array myStr is a character array that does NOT include a null terminator.
  // As such, it is NOT a string! If I try and use it as such (e.g. give it to
  // string functions) that is an error!
  myStr[13] = '!';
  printf("%lu\n", strlen(myStr));
  printf("%s\n", myStr);
}

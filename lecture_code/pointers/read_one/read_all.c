#include <stdio.h>
int main() {
  int x;
  while (!feof(stdin)) {
    if (1==scanf("%d", &x)) {
      printf("%d\n", x*2);
      continue;
    }
    char c;
    scanf("%c", &c);
  }
}

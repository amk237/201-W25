#include <stdio.h>

int main() {
  FILE *f = fopen("myFile.txt", "a");
  fprintf(f, "This is a line appended\n");
  fclose(f);
}

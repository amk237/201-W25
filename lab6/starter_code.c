#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "Usage: %s <codeword>\n", argv[0]);
    return 1;
  }
  if (strlen(argv[1]) > 10) {
    fprintf(stderr, "Error: codeword can be at most 10 characters\n");
    return 1;
  }
  const char * const codeword = argv[1];

}

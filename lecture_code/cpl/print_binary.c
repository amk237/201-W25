#include <stdio.h>

void print_binary(unsigned int num) {
  if (num == 0) {
    printf("0");
  }
  int power = 1;
  while (power <= num) {
    power = power*2;
  }
  power = power/2;
  while (power > 0) {
    if (power <= num) {
      printf("1");
      num = num - power;
    } else {
      printf("0");
    }
    power = power/2;
  }
  printf("\n");
}

int main() {
  print_binary(5); // Should print 101
  print_binary(11); // This should print 1011
  print_binary(128);
}

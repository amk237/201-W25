#include <stdio.h>
#include <math.h>

int isPrime(int p) {
  float root = sqrt(p);
  int x = (int) root+1;
  for (int i = 2; i < x; ++i) {
    if (!(p%i)) {
      return 0;
    }
  }
  return 1;
}

void primes(int n) {
  // This function takes an integer n and prints out all the
  // primes less than that number.
  for (int i = 2; i < n; ++i) {
    if (isPrime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
}


int main() {
  int n;
  scanf("%d", &n);
  primes(n);
}

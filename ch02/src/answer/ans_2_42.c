#include <stdio.h>
#include <math.h>

int div16(int x) {
  /* Compute bias to be either 0  (x >= 0) or 15 (x < 0) */
  int bias = (x >> 31) & 0xF;
  return (x + bias) >> 4;
}

int main() {
  int a = 32;
  printf("%d\n", div16(a));

  a = -32;
  printf("%d\n", div16(a));

  return 0;
}

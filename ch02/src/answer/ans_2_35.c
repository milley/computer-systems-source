#include <stdio.h>
#include <math.h>
#include <stdint.h>

/* Determine whether the arguments can be multiplied without overflow */
int tmult_ok(int x, int y) {
  /* Compute product without overflow */
  int64_t pll = (int64_t)x * y;
  /* See if casting to int preserves value */
  return pll == (int)pll;
}

void print_result(int x, int y) {
  printf("x = %d, y = %d, x*y = %d\n", x, y, tmult_ok(x, y));
}

int main() {
  int x = 100, y = 2000;
  print_result(x, y);
  x = -100, y = -2000;
  print_result(x, y);
  x = 0;
  print_result(x, y);
  y = 0;
  print_result(x, y);

  x = pow(2, 30);
  y = 3;
  print_result(x, y);

  return 0;
}
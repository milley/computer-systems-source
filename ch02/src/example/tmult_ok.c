#include <stdio.h>
#include <math.h>

int tmult_ok(int x, int y) {
  int p = x * y;
  /* Either x is zero, or dividing p by x gives y */
  return !x || p / x == y;
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

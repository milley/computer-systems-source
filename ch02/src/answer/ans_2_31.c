#include <stdio.h>
#include <math.h>

int tadd_ok(int x, int y) {
  int sum = x + y;
  return (sum - x == y) && (sum - y == x);
}

int main() {
  int x = -(int)pow(2, 32);
  x = -2;
  int y = -1;
  printf("%d\n", tadd_ok(x, y));

  x = (int)pow(2, 32) - 1;
  x = 2;
  y = 1;
  printf("%d\n", tadd_ok(x, y));

  return 0;
}

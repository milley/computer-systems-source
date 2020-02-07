#include <stdio.h>
#include <math.h>

int tadd_ok(int x, int y) {
  int sum = x + y;
  int neg_over = x < 0 && y < 0 && sum >= 0;
  int pos_over = x >= 0 && y >= 0 && sum < 0;
  return !neg_over && !pos_over;
}

int main() {
  int x = -(int)pow(2, 32);
  int y = -1;
  printf("%d\n", tadd_ok(x, y));

  x = (int)pow(2, 32) - 1;
  y = 1;
  printf("%d\n", tadd_ok(x, y));

  return 0;
}

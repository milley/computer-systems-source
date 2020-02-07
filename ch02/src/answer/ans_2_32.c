#include <stdio.h>
#include <math.h>

int tadd_ok(int x, int y) {
  int sum = x + y;
  int neg_over = x < 0 && y < 0 && sum >= 0;
  int pos_over = x >= 0 && y >= 0 && sum < 0;
  return !neg_over && !pos_over;
}

int tsub_ok(int x, int y) {
  return tadd_ok(x, -y);
}

int main() {
  int x = -1;
  int y = -(int)pow(2, 32);
  printf("%d\n", tsub_ok(x, y));

  x = 1;
  printf("%d\n", tsub_ok(x, y));

  return 0;
}

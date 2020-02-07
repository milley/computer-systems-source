#include <stdio.h>
#include <math.h>

int uadd_ok(unsigned x, unsigned y) {
  unsigned sum = x + y;
  return sum >= x;
}

int main() {
  unsigned x = 1, y = 2;
  printf("%d\n", uadd_ok(x, y));

  x = (unsigned int)pow(2, 32);
  printf("%d\n", uadd_ok(x, y));

  return 0;
}

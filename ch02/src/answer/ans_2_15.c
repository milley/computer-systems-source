#include <stdio.h>

int equals(int x, int y) {
  return !(x ^ y);
}

int main() {
  printf("%d\n", equals(2, 2));
  printf("%d\n", equals(2, 0));
  printf("%d\n", equals(1, 2));
  printf("%d\n", equals(1, 2));
  printf("%d\n", equals(0, 0));

  return 0;
}

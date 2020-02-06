#include <stdio.h>

int main() {
  int i = -2147483647;
  int ui = 2147483648U;
  int v = 2147483647;
  printf("%d\n", i - 1 == ui);
  printf("%d\n", i - 1 < v);
  printf("%d\n", i - 1U < v);
  printf("%d\n", i - 1 < i);
  printf("%d\n", i - 1U < i);

  return 0;
}

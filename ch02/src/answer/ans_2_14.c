#include <stdio.h>

int main() {
  int x = 0x66;
  int y = 0x39;
  printf("x & y = %s%.8x\n", "0x", x & y);
  printf("x && y = %s%.8x\n", "0x", x && y);
  printf("x | y = %s%.8x\n", "0x", x | y);
  printf("x || y = %s%.8x\n", "0x", x || y);
  printf("~y | ~y = %s%.8x\n", "0x", ~x | ~y);
  printf("!x || !y = %s%.8x\n", "0x", !x || !y);
  printf("x & !y = %s%.8x\n", "0x", x & !y);
  printf("x && ~y = %s%.8x\n", "0x", x && ~y);

  return 0;
}

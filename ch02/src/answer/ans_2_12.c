#include <stdio.h>

int main() {
  int x = 0x87654321;
  printf("%s%.8x\n", "0x", x & 0xFF);
  printf("%s%.8x\n", "0x", ~x ^ 0xFF);
  printf("%s%.8x\n", "0x", x | 0xFF);

  return 0;
}

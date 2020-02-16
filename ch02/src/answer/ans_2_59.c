#include <stdio.h>

int main() {
  int x = 0x89ABCDEF;
  int y = 0x76543210;

  printf("0x%x\n", (x & 0xff));
  printf("0x%x\n", ((y >> 8) << 8));
  printf("0x%x\n", (x & 0xff) | ((y >> 8) << 8));

  return 0;
}

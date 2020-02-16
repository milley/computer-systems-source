#include <stdio.h>

typedef unsigned char *byte_pointer;

unsigned replace_byte(unsigned x, int i, unsigned char b) {
  byte_pointer byte_start = (byte_pointer)&x;
  byte_pointer byte_match = byte_start + i;
  *byte_match = b;
  return x;
}

int main() {
  unsigned x = 0x12345678;
  unsigned char b = 0xAB;
  printf("0x%x\n", x);
  x = replace_byte(x, 2, b);
  printf("0x%x\n", x);

  x = 0x12345678;
  printf("0x%x\n", x);
  x = replace_byte(x, 0, b);
  printf("0x%x\n", x);

  return 0;
}

#include <stdio.h>

/* Get most significant byte from x */
int get_msb(int x) {
  /* Shift by w-8 */
  int shift_val = (sizeof(int) - 1) << 3;
  printf("shift_val = %d\n", shift_val);
  /* Arithmetic shift */
  int xright = x >> shift_val;
  /* Zero all but LSB */
  return xright & 0xFF;
}

int main() {
  int x = 0x76543210;
  int i_msb = get_msb(x);
  printf("0x%x\n", i_msb);

  return 0;
}

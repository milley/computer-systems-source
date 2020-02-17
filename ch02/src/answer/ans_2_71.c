#include <stdio.h>
#include <assert.h>

/* Declaration of data type where 4 bytes are packed into an unsigned */
typedef unsigned packed_t;

#if 0
/* Failed attempt at xbyte */
int xbyte(packed_t word, int bytenum) {
  return (word >> (byteenum << 3)) & 0xFF;
}
#endif

int xbyte(packed_t word, int bytenum) {
  int size = sizeof(unsigned);
  int shift_left_val = (size - 1 - bytenum) << 3;
  int shift_right_val = (size - 1) << 3;
  return (int)word << shift_left_val >> shift_right_val;
}

int main() {
  assert(xbyte(0xAABBCCDD, 1) == 0xFFFFFFCC);
  assert(xbyte(0x00112233, 2) == 0x11);

  return 0;
}

#include <stdio.h>
#include <assert.h>

int A(int x) {
  return !~x;
}

int B(int x) {
  return !x;
}

int C(int x) {
  return A(x | ~0xff);
}

int D(int x) {
  B((x >> ((sizeof(int) - 1) << 3)) && 0xff);
}

int main() {
  int all_bits_one = ~0;
  int all_bits_zero = 0;

  assert(A(all_bits_one));
  assert(!B(all_bits_one));
  assert(C(all_bits_one));
  assert(!D(all_bits_one));

  assert(!A(all_bits_zero));
  assert(B(all_bits_zero));
  assert(!C(all_bits_zero));
  assert(D(all_bits_zero));

  // test magic number 0x1234ff
  int magic_number = 0x1234ff;
  assert(!A(magic_number));
  assert(!B(magic_number));
  assert(C(magic_number));
  assert(D(magic_number));

  // test magic number 0x1234
  magic_number = 0x1234;
  assert(!A(magic_number));
  assert(!B(magic_number));
  assert(!C(magic_number));
  assert(D(magic_number));

  return 0;
}

#include <stdio.h>
#include <assert.h>

/* Return 1 when any odd bit of x equals 1; 0 otherwise.
   Assume w = 32 */
int any_odd_one(unsigned x) {
  return !!(x & 0xAAAAAAAA);
}

int main() {
  assert(any_odd_one(0x2));
  assert(!any_odd_one(0x4));

  return 0;
}

#include <stdio.h>

typedef unsigned char *byte_pointer;
void test_show_bytes(int val);

int main() {
  int ival = 12345;
  test_show_bytes(ival);

  return 0;
}

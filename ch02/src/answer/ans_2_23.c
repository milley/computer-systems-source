#include <stdio.h>

int fun1(unsigned word) {
  return (int)((word << 24) >> 24);
}

int fun2(unsigned word) {
  return ((int)word << 24) >> 24;
}

void print_funcs(unsigned x) {
  printf("%x\t\t", fun1(x));
  printf("%x\n", fun2(x));
}

int main() {
  int x1 = 0x00000076;
  int x2 = 0x87654321;
  int x3 = 0x000000C9;
  int x4 = 0xEDCBA987;

  print_funcs(x1);
  print_funcs(x2);
  print_funcs(x3);
  print_funcs(x4);

  return 0;
}

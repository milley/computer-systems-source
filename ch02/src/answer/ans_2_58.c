#include <stdio.h>
#include <assert.h>

int is_little_endian() {
  unsigned int x = 0x76543210;
  char *c = (char *)&x;

  printf("*c is 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf("Underlying architecture is little endian. \n");
    return 1;
  }
  else
  {
    printf("Underlying architecture is big endian. \n");
    return 0;
  }
}

int main()
{
  assert(is_little_endian() == 1);

  return 0;
}
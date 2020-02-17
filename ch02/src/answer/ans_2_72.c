#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

/* Copy integer into buffer if space is available */
#if 0
void copy_int(int val, void *buf, int maxbytes) {
  if (maxbytes - sizeof(val) >= 0) {
    memcpy(buf, (void *)&val, sizeof(val));
  }
}
#endif

void copy_int(int val, void *buf, int maxbytes) {
  if (maxbytes >= (int)sizeof(val)) {
    memcpy(buf, (void *)&val, sizeof(val));
  }
}

int main() {
  int maxbytes = 10 * sizeof(int);
  void *buf = malloc(maxbytes);
  int val = 0x12345678;
  copy_int(val, buf, maxbytes);
  printf("0x%x\n", *(int*)buf);
  assert(*(int*)buf == val);

  val = 0xAABBCCDD;
  copy_int(val, buf, 0);
  assert(*(int*)buf != val);

  free(buf);

  return 0;
}

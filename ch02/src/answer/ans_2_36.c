#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Illustration of code vulnerability similar to that
 * found in Sun's XDR library
 */
void* copy_elements(void *ele_src[], int ele_cnt, size_t ele_size) {
  /* Allocate buffer for ele_cnt objects, each of ele_size bytes and
   * copy from locations designated by ele_src
   */
  uint64_t required_size = ele_cnt * (uint64_t)ele_size;
  size_t request_size = (size_t)required_size;
  if (required_size != request_size) {
    /* Overflow must have occurred. Abort operation */
    return NULL;
  }
  void *result = malloc(ele_cnt * ele_size);
  if (result == NULL) {
    return NULL;
  }
  void *next = result;
  int i;
  for (i = 0; i < ele_cnt; i++) {
    /* Copy object i to destination */
    memcpy(next, ele_src[i], ele_size);
    /* Move pointer to next memory region */
    next += ele_size;
  }
  return result;
}

int main() {
  char *ele = "Hello";
  void *dest = copy_elements((void *)&ele, 1, strlen(ele) * sizeof(char) + 1);

  printf("%s\n", (char *)dest);

  return 0;
}

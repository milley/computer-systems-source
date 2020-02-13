#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
  /*int num = pow(2, 31) - 1;*/
  int num = (int)(pow(2, 24) + 1);  /* 1000001 length > 6 so trim last 1 */
  printf("%x\n", num);
  printf("%d\n", num);
  printf("%f\n", (float)num);
  printf("%x\n", (int)(float)num);
  printf("%x\n", (int)(double)num);

  float f = pow(2, 24) + 1;
  printf("%d\n", (int)f);

  float f1 = __FLT_MIN__;
  float f2 = __FLT_MAX__;
  printf("%e\n", f1);
  printf("%f\n", f1);
  printf("%e\n", f2);
  printf("%f\n", f2);

  return 0;
}

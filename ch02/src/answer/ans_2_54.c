#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
  /*int num = pow(2, 31) - 1;*/
  int num = (int)(pow(2, 24) + 1);  /* 1000001 length > 6 so trim last 1 */
  printf("%x\n", num);
  printf("%d\n", num);
  printf("%f\n", (float)num);
  printf("%d\n", (int)(float)num);
  printf("%x\n", (int)(float)num);
  printf("%x\n", (int)(double)num);

  float f = pow(2, 24) + 1;
  printf("%d\n", (int)f);

  float f1 = __FLT_MIN__;
  float f2 = __FLT_MAX__;
  printf("%e\n", f1);
  printf("%f\n", f1);
  printf("FLT_MAX = %e\n", f2);
  printf("FLT_MAX = %f\n", f2);

  int i1 = INT_MAX;
  printf("INT_MAX = %d\n", i1);
  double diff = (double)f2 - (double)i1;
  printf("diff = %f\n", diff);


  float m = 16777216;
  printf("%f\n", m);
  printf("%f\n", m + 1);
  printf("===========\n");

  for (int a = 16777210; a < 16777224; a++)
  {
    float b = a;
    int c = b;
    printf("a=%d c=%d b=0x%08x\n", a, c, *((int *)&b));
  }
  for (int a = 2147483520; a < 2147483647; a++)
  {
    float b = a;
    int c = b;
    printf("a=%d c=%d b=0x%08x\n", a, c, *((int *)&b));
  }

  return 0;
}

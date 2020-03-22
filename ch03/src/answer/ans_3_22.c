#include <stdio.h>
#include <inttypes.h>

int64_t fact_do(long n)
{
  int64_t result = 1;
  do
  {
    result *= n;
    n = n - 1;
  } while (n > 1);
  return result;
}

int fact_do_int(int n)
{
  int result = 1;
  do
  {
    result *= n;
    n = n - 1;
  } while (n > 1);
  return result;
}

int main()
{
  for (long i = 1; i < 14; i++)
  {
    printf("%d\n", fact_do_int(i));
  }
  printf("----------\n");
  for (long i = 1; i < 22; i++)
  {
    printf("%ld\n", fact_do(i));
  }
  return 0;
}

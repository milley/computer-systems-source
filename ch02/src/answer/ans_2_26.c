#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t) {
  /*return strlen(s) - strlen(t) > 0;*/
  return (int)strlen(s) - (int)strlen(t) > 0;
}

int main() {
  char s[] = {};
  char t[] = {'1'};
  printf("%d\n", strlonger(s, t));

  return 0;
}

#include <stdio.h>
#include "float_absval.h"

/* Compute |f|. If f is NaN, then return f. */
float_bits float_absval(float_bits f) {
  unsigned sig = f >> 31;
  unsigned exp = f >> 23 & 0xFF;
  unsigned frac = f & 0x7FFFFF;

  int is_NaN = (exp == 0xFF) && (frac != 0);
  if (is_NaN) {
    return f;
  }

  return 0 << 31 | exp << 23 | frac;
}
